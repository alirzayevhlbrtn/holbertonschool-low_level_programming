#include "main.h"

/**
 * _memcpy - check the code
 *
 * @dest: variable1
 * @src: variable2
 * @n: variable3
 *
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
