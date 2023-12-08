#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end - gay
 * @head: 1st node
 * @n: int
 * Return: struct
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	dlistint_t *lastnode = *head;

	if (!new_node)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (!*head)
		*head = newnode;
	else
	{
		while (lastnode->next)
			lastnode = lastnode->next;
		lastnode->next = newnode;
		newnode->prev = lastnode;
	}
	return (*head);
}
