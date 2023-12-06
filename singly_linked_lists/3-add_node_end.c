#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - gay
 * @head: head
 * @str: string
 * Return: list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));
	list_t *lastnode;

	if (!newnode)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = NULL;
	if (!*head)
		*head = newnode;
	else
	{
		lastnode = *head;
		while (lastnode->next)
			lastnode = lastnode->next;
		lastnode->next = newnode;
	}
	return (*head);
}
