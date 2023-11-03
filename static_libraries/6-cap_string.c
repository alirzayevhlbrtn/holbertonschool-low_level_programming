#include "main.h"

/**
 * cap_string - check the code
 *
 * @s: variable
 *
 * Return: Always 0.
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (i == 0)
		{
			if (s[i] >= 97 && s[i] <= 122)
			{
				s[i] = s[i] - 32;
			}
			i++;
		}
		else
		{
			if (s[i - 1] <= 34 || s[i - 1] == '?' || s[i - 1] == '.' || s[i - 1] == ',')
			{
				if (s[i] >= 97 && s[i] <= 122)
				{
					s[i] = s[i] - 32;
				}
			}
			if (s[i - 1] == '\t' || s[i - 1] == ';' || s[i - 1] == '(')
			{
				if (s[i] >= 97 && s[i] <= 122)
				{
					s[i] = s[i] - 32;
				}
			}
			if (s[i - 1] == '{' || s[i - 1] == '}' || s[i - 1] == ')')
			{
				if (s[i] >= 97 && s[i] <= 122)
				{
					s[i] = s[i] - 32;
				}
			}
			i++;
		}
	}
	return (s);
}
