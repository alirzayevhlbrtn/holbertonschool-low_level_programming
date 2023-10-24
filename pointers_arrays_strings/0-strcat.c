#include "main.h"
#include <string.h>

/**
 * reset_to_98 - check the code
 *
 * @n: variable
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int ld = strlen(dest);
	int ls = strlen(src);
	char* h[ls + ld];

	for (i = 0; i < ls; i++)
	{
		*(dest + ld) = *(src + i);
		ld++;
	}
	return (dest);
}
