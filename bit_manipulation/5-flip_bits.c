#include "main.h"
/**
 * flip_bits - gay
 * @n: number
 * @m: number2
 * Return: number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	n = n ^ m;
	while (n)
	{
		count += n & 1;
		n = n >> 1;
	}
	return (count);
}
