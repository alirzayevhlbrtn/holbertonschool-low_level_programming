#include "main.h"
#include <stdio.h>

/**
 * _strcmp - check the code
 *
 * @s1: variable1
 * @s2: variable2
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int s1l, s2l, i, n, k;
	
	s1l = 0;
	s2l = 0;

	while (s1[s1l] != '\0')
	{
		s1l++;
	}

	while (s2[s2l] != '\0')
	{
		s2l++;
	}

	if (s1l == s2l)
	{
		n = s1l;
	}
	else if (s1l > s2l)
	{
		n = s1l;
	}
	else if (s2l > s1l)
	{
		n = s2l;
	}
	
	for (i = 0; i < n; i++)
	{
		if (s1[i] != s2[i])
		{
			k = s1[i] - s2[i];
			return (k);
		}
	}
	return (0);
}
