#include "main.h"
/**
 * _islower - Entry point
 *
 * @c: variable
 *
 * Return: 0 - upper OR 1 - lower
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
