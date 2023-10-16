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
	int n, k;

	/* your code goes there */
	for (n = 48; n <= 56; n++)
	{
		for (k = n + 1; k <= 57; k++)
		{
			putchar(n);
			putchar(k);
			if (n == '8' && k == '9')
			{
				continue; 
			}
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
