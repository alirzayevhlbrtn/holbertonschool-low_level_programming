#include "main.h"
#include <string.h>

/**
 * puts_half - Entry point
 *
 * @str: 'varaibles'
 *
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int l = strlen(dest);
	int i;

	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	dest[i + 1] = '\0';
	return (dest);
}
