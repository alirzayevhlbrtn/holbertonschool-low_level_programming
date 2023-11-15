#include "main.h"
#include <stdlib.h>
/**
 * array_range - gay
 *
 * @min: int
 * @max: int1
 *
 * Return: gay
 */
int *array_range(int min, int max)
{
	int *s;
	int i;

	if (min > max)
		return (NULL);
	s = malloc((max - min + 1) * sizeof(int));
	if (s == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		s[i] = i;
	return (s);
}
