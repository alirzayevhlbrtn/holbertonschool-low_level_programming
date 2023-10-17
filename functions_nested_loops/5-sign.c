#include "main.h"
/**
 * print_sign - Entry point
 *
 * @n: variable
 *
 * Return: 1 - + OR 0 - zero OR -1 - negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
