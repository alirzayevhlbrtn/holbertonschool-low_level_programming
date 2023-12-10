#include <limits.h>
/**
 * clear_bit - gay
 * @n: int
 * @index: index
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = ULONG_MAX - (1 << index);
	unsigned int size = sizeof(unsigned int) * 8;

	if (index < size)
	{
		*n = *n & a;
		return (1);
	}
	return (-1);
}
