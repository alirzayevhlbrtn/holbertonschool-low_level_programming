#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - gay
 * @h: dlist
 * Return: len
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t s = 0;

	while (h)
	{
		s++;
		h = h->next;
	}
	return (s);
}
