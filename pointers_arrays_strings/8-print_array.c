#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts_half - Entry point
 *
 * @a: varaible1
 * @n: variable2
 *
 * Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
