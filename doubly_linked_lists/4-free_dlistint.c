#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - gay
 * @head: 1st node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
