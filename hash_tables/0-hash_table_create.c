#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_tables_create - gay
 * @size: size of hash table
 * Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (!table)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (!table->array)
		return (NULL);
	return (table);
}
