#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - gay
 * @head: 1st node
 * @index: index of wanted node
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 1;

	while (count != index)
	{
		head = head->next;
		count++;
	}
	head = head->next;
	if (head == NULL)
		return (NULL);
	else
		return (head);
}
