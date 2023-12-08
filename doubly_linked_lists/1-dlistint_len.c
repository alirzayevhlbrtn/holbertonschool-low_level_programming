#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - gay
 * @h: dlist
 * Return: len
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t s = 0;

	while (h)
	{
		s++;
		h = h->next;
	}
	return (s);
}
