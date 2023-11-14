#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function
 *
 * @b: unsigned int
 *
 * Return: 0.
 */
void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
}
