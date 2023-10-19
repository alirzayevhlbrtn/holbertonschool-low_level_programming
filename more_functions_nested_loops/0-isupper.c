#include "main.h"
/**
 * _isupper - Entry point
 *
 * @c: variable
 *
 * Return: 1 - upper OR 0 - lower
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
