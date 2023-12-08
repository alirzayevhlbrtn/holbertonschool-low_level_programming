#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - gay
 * @h: dlist
 * Return: len
 */
size_t print_dlistint(const dlistint_t *h)
{
	int s = 0;
	while (h)
	{
		s++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (s);
}
