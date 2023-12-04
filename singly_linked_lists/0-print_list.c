#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - gay
 * @h: list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int c = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		c++;
	}
	return (c);
}
