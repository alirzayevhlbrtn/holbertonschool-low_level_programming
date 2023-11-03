#include "main.h"
#include <string.h>

/**
 * puts_half - Entry point
 *
 * @str: 'varaibles'
 *
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
	int c = 0;
	int i;

	c = strlen(str);

	if (c % 2 == 0)
	{
		for (i = c / 2; i < c; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (c + 1) / 2; i < c; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
