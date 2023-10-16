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
	int n, k, j;

	/* your code goes there */
	for (n = 48; n <= 55; n++)
	{
		for (k = n + 1; k <= 56; k++)
		{
			for (j = k + 1; j <= 57; j++)
			{
				putchar(n);
				putchar(k);
				putchar(j);
				if (n == '7' && k == '8' && j == '9')
				{
					continue;
				}
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
