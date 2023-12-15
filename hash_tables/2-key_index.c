#include "hash_tables.h"
/**
 * key_index - gay
 * @key: key
 * @size: size of table
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int h = hash_djb2(key);

	return (h % size);
}
