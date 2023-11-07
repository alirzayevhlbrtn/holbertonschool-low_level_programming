#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * create_array - Entry point
 * @_strdup: int
 * @str: string
 *
 * Return: void
 */
char *_strdup(char *str)
{
	char *s;
	int i, lens;

	if (str == NULL)
	{
		return (NULL);
	}

	lens = strlen(str);
	s = malloc(sizeof(char) * lens + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < lens; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';
	return (s);
}
