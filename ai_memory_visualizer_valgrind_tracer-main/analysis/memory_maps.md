# Memory Maps

---

# aliasing_example.c - Aliasing and Use-After-Free

## Step 1 — main() entered

┌───────────────────────────┐
│ main                      │
│  a = NULL                 │
│  b = NULL                 │
│  n = 5                    │
└───────────────────────────┘

HEAP: (empty)

## Step 2 — make_numbers(5) called, block allocated
┌───────────────────────────┐
│ main                      │
│  a = NULL                 │
│  b = NULL                 │
│  n = 5                    │
├───────────────────────────┤
│ make_numbers(5)           │
│  n(param) = 5             │  (copy of main's n — separate storage)
│  i = 0                    │
│  arr = 0x56f3f36f86b0     │  ──▶ Block A
└───────────────────────────┘

┌────────────────────────────────────┐
│ HEAP                               │
├────────────────────────────────────┤
│ Block A   0x56f3f36f86b0           │
│  size:  20 bytes (5 ints)          │
│  data:  uninitialized              │
│  status: live                      │
└────────────────────────────────────┘

## Step 3 — loop fills the array, function returns
┌───────────────────────────┐
│ main                      │
│  a = 0x56f3f36f86b0       │  ──▶ Block A
│  b = NULL                 │
│  n = 5                    │
└───────────────────────────┘
  (make_numbers frame destroyed: i, param n, arr no longer exist —
   only the ADDRESS they held survives, copied into `a`)

┌────────────────────────────────────┐
│ HEAP                               │
├────────────────────────────────────┤
│ Block A   0x56f3f36f86b0           │
│  size:  20 bytes                   │
│  data:  [0, 11, 22, 33, 44]        │
│  status: live                      │
└────────────────────────────────────┘

## Step 4 — b = a; (aliasing created)
┌───────────────────────────┐
│ main                      │
│  a = 0x56f3f36f86b0       │  ──▶ Block A
│  b = 0x56f3f36f86b0       │  ──▶ Block A   (ALIAS of a — same address)
│  n = 5                    │
└───────────────────────────┘

Confirmed by output: a=0x56f3f36f86b0 b=0x56f3f36f86b0 a[2]=22 b[2]=22 — both names read the same memory and return the same value.

### Step 6 — reading b[2] (use-after-free read)
┌────────────────────────────────────┐
│ HEAP                               │
├────────────────────────────────────┤
│ Block A   0x56f3f36f86b0           │
│  status: FREED                     │
│  b[2] read → 1940026822 (garbage,  │
│    likely glibc free-list metadata │
│    written into the freed chunk)   │
└────────────────────────────────────┘

Undefined behavior, no crash — the page is still mapped, the value is simply garbage instead of the expected 22.

## Step 7 — b[3] = 1234; (use-after-free write)
┌────────────────────────────────────┐
│ HEAP                               │
├────────────────────────────────────┤
│ Block A   0x56f3f36f86b0           │
│  status: FREED, then OVERWRITTEN   │
│  b[3] write → 1234                 │
│    (corrupts whatever the allocator│
│     is currently using this freed  │
│     memory for)                    │
└────────────────────────────────────┘

# crash_example.c — NULL Pointer Dereference
## Step 1 — main() entered
┌───────────────────────────┐
│ main                      │
│  nums = NULL              │
│  n = 0                    │
└───────────────────────────┘

HEAP: (empty)
## Step 2 — allocate_numbers(0) called
┌───────────────────────────┐
│ main                      │
│  nums = NULL              │
│  n = 0                    │
├───────────────────────────┤
│ allocate_numbers(0)       │
│  n(param) = 0             │
│  arr = NULL               │
│  i = 0                    │
└───────────────────────────┘

HEAP: (empty — malloc not reached yet)
## Step 3 — guard clause returns NULL, malloc is never reached
┌───────────────────────────┐
│ main                      │
│  nums = NULL              │
│  n = 0                    │
└───────────────────────────┘
  (allocate_numbers frame destroyed — n<=0 was true, so
   return NULL fired BEFORE malloc ever executed)

HEAP: (empty — this run never allocates anything at all)
## Step 4 — nums[0] = 42; → SIGSEGV
┌───────────────────────────┐
│ main                      │
│  nums = NULL  ────────────┼──▶ 0x0  (unmapped address)
│  n = 0                    │
└───────────────────────────┘
  nums[0] = 42  ≡  *(int *)(0x0) = 42  →  SIGSEGV → process killed

main's remaining lines (printf, free, return 0;) are never reached — this is a kernel-forced kill, not a normal return.

# 3. heap_example.c — Struct + String Allocation, and a Deliberate Leak
## Step 1 — main() entered
┌───────────────────────────┐
│ main                      │
│  alice = NULL             │
│  bob   = NULL             │
└───────────────────────────┘

HEAP: (empty)
## Step 2 — person_new("Alice", 30) called, struct allocated
┌────────────────────────────────────┐
│ main                               │
│  alice = NULL                      │
│  bob   = NULL                      │
├────────────────────────────────────┤
│ person_new("Alice", 30)            │
│  name = ──▶ "Alice" (static, read-only)
│  age  = 30                         │
│  i    = 0                          │
│  len  = 0                          │
│  p    = 0x5c4590fe16b0             │  ──▶ Block A
└────────────────────────────────────┘

┌────────────────────────────────────┐
│ HEAP                               │
├────────────────────────────────────┤
│ Block A   0x5c4590fe16b0           │
│  size:  16 bytes (sizeof(Person))  │
│  status: live (fields not set yet) │
└────────────────────────────────────┘
## Step 3 — name buffer allocated, string copied, age set, function returns
┌───────────────────────────┐
│ main                      │
│  alice = 0x5c4590fe16b0   │  ──▶ Block A
│  bob   = NULL             │
└───────────────────────────┘
  (person_new frame destroyed — name, age, i, len, p no longer exist)

┌──────────────────────────────────────────────┐
│ HEAP                                         │
├──────────────────────────────────────────────┤
│ Block A   0x5c4590fe16b0                     │
│  name = 0x5c4590fe16d0   ──▶ Block B         │
│  age  = 30                                   │
│  status: live                                │
├──────────────────────────────────────────────┤
│ Block B   0x5c4590fe16d0                     │
│  data:  "Alice\0"                            │
│  status: live                                │
└──────────────────────────────────────────────┘
  note: Block B sits 0x20 (32 bytes) after Block A, even though A
  was only requested at 16 bytes — glibc's minimum chunk size on
  64-bit systems is 32 bytes, so small requests get rounded up.
Step 4 — person_new("Bob", 41) called: struct and name allocated
┌───────────────────────────┐
│ main                      │
│  alice = 0x5c4590fe16b0   │  ──▶ Block A
│  bob   = 0x5c4590fe16f0   │  ──▶ Block C
└───────────────────────────┘

┌──────────────────────────────────────────────┐
│ HEAP                                         │
├──────────────────────────────────────────────┤
│ Block A   0x5c4590fe16b0                     │
│  name = 0x5c4590fe16d0   ──▶ Block B        │
│  age  = 30      status: live                 │
├──────────────────────────────────────────────┤
│ Block B   0x5c4590fe16d0                     │
│  data: "Alice\0"    status: live             │
├──────────────────────────────────────────────┤
│ Block C   0x5c4590fe16f0                     │
│  name = 0x5c4590fe1710   ──▶ Block D        │
│  age  = 41      status: live                 │
├──────────────────────────────────────────────┤
│ Block D   0x5c4590fe1710                     │
│  data: "Bob\0"      status: live             │
└──────────────────────────────────────────────┘

Matches the printed output exactly: alice=0x5c4590fe16b0 name=0x5c4590fe16d0 age=30 and bob=0x5c4590fe16f0 name=0x5c4590fe1710 age=41.

Step 5 — free(bob->name); then Step 6 — free(bob);
┌───────────────────────────┐
│ main                      │
│  alice = 0x5c4590fe16b0   │  ──▶ Block A
│  bob   = 0x5c4590fe16f0   │  (dangling, never used again — harmless)
└───────────────────────────┘

┌──────────────────────────────────────────────┐
│ HEAP                                         │
├──────────────────────────────────────────────┤
│ Block A   0x5c4590fe16b0     status: live    │
│ Block B   0x5c4590fe16d0     status: live    │
│ Block C   0x5c4590fe16f0     status: FREED   │
│ Block D   0x5c4590fe1710     status: FREED   │
└──────────────────────────────────────────────┘

Bob is now fully and correctly cleaned up — string freed before struct, in the right order.

Step 7 — person_free_partial(alice); — the leak
┌───────────────────────────┐
│ main                      │
│  alice = 0x5c4590fe16b0   │  (dangling, unused after)
│  bob   = 0x5c4590fe16f0   │  (dangling, unused after)
└───────────────────────────┘

┌──────────────────────────────────────────────┐
│ HEAP                                         │
├──────────────────────────────────────────────┤
│ Block A   0x5c4590fe16b0     status: FREED   │
│ Block B   0x5c4590fe16d0     status: LEAKED  │  ◄── unreachable,
│                                              │      never freed
│ Block C   0x5c4590fe16f0     status: freed   │
│ Block D   0x5c4590fe1710     status: freed   │
└──────────────────────────────────────────────┘

Block B ("Alice\0") was only ever reachable through alice->name, a field living inside Block A. Freeing A destroys the only pointer to B — it is still allocated, but no variable anywhere in the program can reach it anymore. Classic "freed the container, forgot the contents."

## Step 8 — main returns

Process exits; the OS reclaims all memory, including the leaked Block B. Run under Valgrind, this shows up as "definitely lost: 6 bytes in 1 block," traced to the malloc(len + 1) call inside person_new.

# 4. stack_example.c — Recursion and Frame Lifetime
Growth phase — peak recursion depth (depth = 3, base case)
┌─────────────────────────────────────────────────┐
│ main                                            │
├─────────────────────────────────────────────────┤
│ walk_stack(depth=0)                             │
│  marker = 0     &marker = 0x7ffef1ae4994        │
├─────────────────────────────────────────────────┤
│ walk_stack(depth=1)                             │
│  marker = 10    &marker = 0x7ffef1ae4964        │
├─────────────────────────────────────────────────┤
│ walk_stack(depth=2)                             │
│  marker = 20    &marker = 0x7ffef1ae4934        │
├─────────────────────────────────────────────────┤
│ walk_stack(depth=3)                             │
│  marker = 30    &marker = 0x7ffef1ae4904        │
├─────────────────────────────────────────────────┤
│ dump_frame("enter", 3)                          │
│  local_int = 103     &local_int = 0x7ffef1ae48b4│
│  local_buf[0] = 'D'  &local_buf = 0x7ffef1ae48c0│
│  p_local = 0x7ffef1ae48b4   (= &local_int)      │
└─────────────────────────────────────────────────┘

Each walk_stack frame sits 0x30 (48 bytes) below its caller's — direct evidence the stack grows downward in memory, with a fixed, deterministic size per call. depth < max_depth evaluates 3 < 3 → false, so this is the base case: no walk_stack(4, 3) frame is ever pushed.
