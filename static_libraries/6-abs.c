#include "main.h"
/**
 * _abs - Entry point
 *
 * @n: variable
 *
 * Return: 1 - + OR 0 - zero OR -1 - negative
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1 * n);
	}
	else
	{
		return (0);
	}
}
