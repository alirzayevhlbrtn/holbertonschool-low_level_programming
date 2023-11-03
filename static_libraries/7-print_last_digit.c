#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * @n: variable
 *
 * Return: last digit of integer n
 */
int print_last_digit(int n)
{
	int h;

	h = n % 10;
	if (h < 0)
	{
		h = -1 * h;
	}
	_putchar(h + '0');
	return (h);
}
