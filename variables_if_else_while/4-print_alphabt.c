#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	/* print all aphabet */
	char n;

	/* your code goes there */
	for (n = 'a'; n <= 'z'; n++)
	{
		if (n != 'e' && n != 'q')
		{
			putchar(n);
		}
	}
	putchar('\n');
	return (0);
}
