#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * list_len - gay
 * @h: list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int c = 0;

	while (h != NULL)
	{
		h = h->next;
		c++;
	}
	return (c);
}
