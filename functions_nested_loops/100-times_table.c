#include "main.h"
/**
 * times_table - Entry point
 *
 * @n: variable
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, a, f, r;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 10; j++)
		{
			a = i * j;
			if (j > 0 && a >= 10)
			{
				_putchar(',');
				_putchar(' ');
			}
			else if (j > 0 && a < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			if (a >= 10)
			{
				r = a % 10;
				f = a / 10;
				_putchar(f + '0');
				_putchar(r + '0');
			}
			else
			{
				_putchar(a + '0');
			}

		}
		_putchar('\n');
	}
}
