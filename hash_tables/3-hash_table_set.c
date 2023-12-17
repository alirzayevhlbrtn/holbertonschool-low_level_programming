#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * hash_table_set - gay
 * @ht: hash table
 * @key: key
 * @value: value to store
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int size = ht->size;
	unsigned long int index = key_index((unsigned char *)key, size);
	char *copyk, *copyv;
	hash_node_t *node, *newnode;

	if (!key || !ht || !(ht->array))
		return (0);
	copyv = strdup(value);
	if (!copyv)
		return (0);
	copyk = strdup(key);
	if (!copyk)
		return (0);

	node = ht->array[index];


	while (ht->array[index])
	{
		if (!strcmp(ht->array[index]->key, key))
		{
			free(ht->array[index]->value);
			ht->array[index]->value = copyv;
			return (1);
		}
		ht->array[index] = ht->array[index]->next;
	}

	newnode = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (!newnode)
		return (0);
	newnode->value = copyv;
	newnode->key = copyk;
	newnode->next = node;
	ht->array[index] = newnode;

	return (1);
}
