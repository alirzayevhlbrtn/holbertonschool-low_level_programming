#include "main.h"
#include <stdlib.h>
/**
 * create_array - Entry point
 * @size: int
 * @c: string
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
		if (ar == NULL)
		{
			return NULL;
		}
		for (i = 0; i < size; i++)
		{
			ar[i] = c;
		}
		return (ar);
	}
}
