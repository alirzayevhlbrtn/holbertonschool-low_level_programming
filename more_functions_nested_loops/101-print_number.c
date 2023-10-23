#include "main.h"
/**
 * print_number - Entry point
 *
 * @n: variable
 *
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		_putchar('0' + n % 10);
	}
}
