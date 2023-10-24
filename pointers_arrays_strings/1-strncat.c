#include "main.h"
#include <string.h>

/**
 * _strncat - check the code
 *
 * @dest: variable1
 * @src: variable2
 * @n: variable3
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_length, src_length, i;

	dest_length = strlen(dest);
	src_length = strlen(src);
	i = 0;

	if (n > src_length)
	{
		n = src_length;
	}
	while (i <= src_length)
	{
		*(dest + dest_length) = *(src + i);
		dest_length++;
		i++;
	}
	return (dest);
}
