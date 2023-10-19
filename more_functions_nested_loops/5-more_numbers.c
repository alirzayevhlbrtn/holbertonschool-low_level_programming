#include "main.h"
/**
 * more_numbers - Entry point
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;
	char a[] = "01234567891011121314";

	for (i = 0; i <= 8; i++)
	{
		for (j = 0; j <= 19; j++)
		{
			_putchar(a[j]);
		}
		_putchar('\n');
	}
}
