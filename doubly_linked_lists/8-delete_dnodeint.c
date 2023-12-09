#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - gay
 * @head: 1st node
 * @index: index of delete
 * Return: integer
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (dlistint_len(*head) <= index)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		if ((*head)->next)
		{
			(*head) = (*head)->next;
			(*head)->prev = NULL;
		}
		else
			(*head) = NULL;
	}
	else
	{
		while (i < index)
		{
			temp = temp->next;
			i++;
		}
		if (temp->next)
		{
			temp->next->prev = temp->prev;
			temp->prev->next = temp->next;
		}
		else
			temp->prev->next = NULL;
	}
	free(temp);
	return (1);
}
