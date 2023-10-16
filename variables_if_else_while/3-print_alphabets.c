#include <stdlib.h>
#include <stdio.h>
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
	char n, k;

	/* your code goes there */
	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	for (k = 'A'; k <= 'Z'; k++)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
}
