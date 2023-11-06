#include "main.h"
#include <stdlib.h>
/**
 * _puts_recursion - Entry point
 * @s: string
 *
 * Return: void
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return NULL;
	}
	else
	{
		unsigned int i;
		char *ar;
		ar = malloc(sizeof(char) * size);
		for (i = 0; i < size; i++)
		{
			ar[i] = c;
		}
		return (ar);
	}
}
