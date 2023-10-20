#include "main.h"
/**
 * print_triangle - Entry point
 *
 * @size: variable
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k, p;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			p = size - i;
			for (j = 1; j <= p; j++)
			{
				_putchar(' ');
			}
			for (k = 1; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
