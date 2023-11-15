#include "main.h"
#include <stdlib.h>
/**
 * _calloc
 *
 * @nmemb: int1
 * @size: int2
 *
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *s;

	if (size == 0 || nmemb == 0)
		return (NULL);
	s = malloc(size * nmemb);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		s[i] = 0;
	}
	return (s);
}
