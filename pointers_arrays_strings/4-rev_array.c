#include "main.h"

/**
 * _strncpy - check the code
 *
 * @a: variable1
 * @n: variable2
 *
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
