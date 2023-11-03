#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int mx, sum;

	for (mx = 0; mx < 1024; mx++)
	{
		if (mx % 3 == 0 || mx % 5 == 0)
		{
			sum += mx;
		}
	}
	printf("%d\n", sum);
	return (0);
}
