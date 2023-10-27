#include "main.h"

/**
 * _memset - check the code
 *
 * @s: varable1
 * @b: variable2
 * @n: variable3
 *
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
