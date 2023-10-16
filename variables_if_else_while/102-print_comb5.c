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
	int n, k, j, l;

	/* your code goes there */
	for (n = 48; n <= 57; n++)
	{
		for (k = 48; k <= 57; k++)
		{
			for (j = 48; j <= 57; j++)
			{
				for (l = 48; l <= 57; l++)
				{
					putchar(n);
					putchar(k);
					putchar(32);
					putchar(j);
					putchar(l);
					if (n < 57 || k < 56 || j < 57 || l < 57)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
