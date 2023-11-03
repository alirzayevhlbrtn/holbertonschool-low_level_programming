#include "main.h"
/**
 * _isdigit - Entry point
 *
 * @c: variable
 *
 * Return: 1 - upper OR 0 - lower
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
