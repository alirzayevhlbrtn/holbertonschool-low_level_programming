#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - gay
 * @h: 1st node
 * @idx: index
 * @n: value
 * Return: list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	dlistint_t *first_part = *h;
	unsigned int i = 0;

	if (newnode)
	{
		newnode->n = n;
		if (idx == 0)
		{
			if (*h)
			{
				newnode->next = *h;
				(*h)->prev = newnode;
			}
			*h = newnode;
			return (newnode);
		}
		while (i < idx - 1 && first_part)
		{
			first_part = first_part->next;
			i++;
		}
		if (first_part)
		{
			if (first_part->next)
				first_part->next->prev = newnode;
			newnode->next = first_part->next;
			newnode->prev = first_part;
			first_part->next = newnode;
			return (newnode);
		}
	}
	return (NULL);
}
