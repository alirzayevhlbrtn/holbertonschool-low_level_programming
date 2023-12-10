#include "main.h"
/**
 * binary_printer - gay
 * @n: int
 */
void binary_printer(unsigned long int n)
{
	if (!n)
		return;
	binary_printer(n >> 1);
	_putchar((n & 1) + '0');
}
/**
 * print_binary - gay
 * @n: int
 */
void print_binary(unsigned long int n)
{
	if (!n)
		_putchar('0');
	binary_printer(n);
}
