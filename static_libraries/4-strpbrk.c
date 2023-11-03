#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - check the code
 *
 * @s: varable1
 * @accept: variable2
 *
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;
	int l2 = strlen(accept);

	while (s[i] != 32)
	{
		for (j = 0; j < l2; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
		i++;
	}
	return (NULL);
}
