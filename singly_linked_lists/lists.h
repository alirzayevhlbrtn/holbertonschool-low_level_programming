#ifndef lists_h
#define lists_h

#include <stddef.h>
/**
 * struct list_s - singly linked l
 * @str: str
 * @len: len
 * @next: pointer to next
 *
 * Description: singly linked l
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
#endif
