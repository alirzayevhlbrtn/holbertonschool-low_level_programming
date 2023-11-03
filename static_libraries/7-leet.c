#include "main.h"
#include <ctype.h>

/**
 * leet - check the code
 *
 * @s: varable1
 *
 * Return: Always 0.
 */
char *leet(char *s)
{
	char arr[] = {'A', 'E', 'O', 'T', 'L'};
	int arrn[] = {4, 3, 0, 7, 1};
	char c;
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			c = toupper(s[i]);
			if (c == arr[j])
			{
				s[i] = arrn[j] + '0';
			}
		}
		i++;
	}
	return (s);
}
