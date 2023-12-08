#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - gay
 * @head: 1st node
 * @n: number
 * Return: new list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;
	if ((*head))
		(*head)->prev = newnode;
	*head = newnode;
	return (*head);
}
