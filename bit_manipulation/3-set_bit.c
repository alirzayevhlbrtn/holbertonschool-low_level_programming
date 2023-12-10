#include "main.h"
/**
 * set_bit - gay
 * @n: int
 * @index: index
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;
	unsigned int size = sizeof(unsigned int) * 8;

	if (index < size)
	{
		a = *n;
		*n = *n >> index;
		*n = *n | 1;
		*n = *n << index;
		*n = *n | a;
		return (1);
	}
	return (-1);
}
