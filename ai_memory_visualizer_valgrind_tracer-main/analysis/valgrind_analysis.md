# Valgrind Analysis

# aliasing_example.c
Valgrind reports 3 different warnings.
    1 - Invalid read, b[2], located at line 42.
    2 - Invalid write, b[3] = 1234, located at line 44.
    3 - Invalid read, b[3], located at line 45.

All errors are a result of use-after-free.

# crash_example.c
Crash example isn't executable due to the sh interpreting Line 4 differently. However valgrind still outputs a leak summary of "still reachable: 1,096 bytes in 30 blocks". This is a result of the shells own statup allocations which were not closed or freed once it was unable to compile.

# heap_example.c
Valgrind reports that 6 bytes in 1 blocks are definitely lost...

This heap leak can be see at Line 69 where the the pointer to Alice is freed but the value of name within Alice is not freed.

# stack_example.c
Valgrind reports that all heap blocks were freed with no possible leaks.