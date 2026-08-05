#ifndef LIST_H
#define LIST_H

/**
 * struct list_s - node holding a str, its length
 * @str: poninter to a string
 * @len: length of the string
 * @next: next node
 *
 * Description: a node that will hold a string and the strings length
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);

#endif
