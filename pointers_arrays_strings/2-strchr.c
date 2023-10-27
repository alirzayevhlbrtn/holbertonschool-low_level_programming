#include "main.h"

/**
 * _strchr - check the code
 *
 * @s: varable1
 * @c: variable2
 *
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');
}
