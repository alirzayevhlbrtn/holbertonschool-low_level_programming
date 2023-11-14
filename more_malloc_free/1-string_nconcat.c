#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - function
 *
 * @s1: string1
 * @s2: string2
 * @n: integer
 *
 * Return: pox
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int slen1 = strlen(s1);
	unsigned int slen2 = strlen(s2);
	unsigned int i;
	char *s;

	if (n >= slen2)
		n = slen2;
	s = malloc(slen1 + n + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < slen1; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		s[i + slen1] = s2[i];
	}
	s[slen1 + n] = '\0';
	return (s);
}
