#include "main.h"

/**
 * _strlen - check the code
 *
 * @s: variable
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		s++;
		c++;
	}

	return (c);
}
