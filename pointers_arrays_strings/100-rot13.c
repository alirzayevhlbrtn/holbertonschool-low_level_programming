#include "main.h"

/**
 * rot13 - check the code
 *
 * @a: varable1
 * @b: variable2
 *
 * Return: Always 0.
 */
char *rot13(char *s)
{
	char c;
	int i = 0;

	while (s[i] != '\0')
	{
		c = s[i];
		for (; (c >= 65 && c <= 90) || (c >= 97 && c <= 122);)
		{
			if ((c >= 65 && c <= 77) || (c >= 97 && c <= 109))
			{
				s[i] = c + 26;
				c = s[i];
			}
			s[i] = c - 13;
			break;
		}
		i++;
	}
	return (s);
}
