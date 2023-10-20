#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: void
 */
int main(void)
{
	long int i;
	long int nm = 612852475143;
	long int mx = 0;

	for (i = 2; i <= nm; i++)
	{
		if (nm % i == 0)
		{
			nm = nm / i;
			mx = i;
		}
	}
	printf("%ld\n", mx);
	return (0);
}
