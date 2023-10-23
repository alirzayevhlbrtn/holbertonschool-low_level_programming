#include "main.h"
#include <string.h>

/**
 * puts_half - Entry point
 *
 * @str: 'varaibles'
 *
 * Return: Always 0 (Success)
 */
int _atoi(char *s)
{
	int l = strlen(s);
	int i;
	int num = 0;
	int neg = 0;

	for (i = 0; i < l; i++)
	{
		if (s[i] == '-')
		{
			neg++;
		}
		else if (s[i] >= 48 && s[i] <= 57)
		{
			num = num * 10 + ((int)s[i] - 48);
			if (!(s[i + 1] >= 48 && s[i + 1] <= 57))
			{
				break;
			}
		}
	}
	if (neg % 2 != 0)
	{
		num = -1 * num;
	}
	return (num);
}
