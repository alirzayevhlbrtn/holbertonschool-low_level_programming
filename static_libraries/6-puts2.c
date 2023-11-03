#include "main.h"

/**
 * puts2 - check the code
 *
 * @str: variable
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	int c = 0;

	while (*str != '\0')
	{
		if (c % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
		c++;
	}
	_putchar('\n');
}
