#include <stdlib.h>
/**
 * get_bit - gay
 * @n: int
 * @index: index
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size = sizeof(unsigned long int * 8);

	if (size <= index)
		return (-1);
	n = n >> index & 1;
	return (n);
}
