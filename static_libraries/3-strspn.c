#include "main.h"
#include <string.h>

/**
 * _strspn - check the code
 *
 * @s: varable1
 * @accept: variable2
 *
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	int l2 = strlen(accept);
	unsigned int count = 0;

	while (s[i] != 32)
	{
		for (j = 0; j < l2; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
			}
		}
		i++;
	}
	return (count);
}
