#include <stdio.h>
#include <stdlib.h>
/**
 * isint - check if it is int.
 * @s: string.
 * Return: 0 or 1.
 */
int isint(char *s)
{
	if (*s >= '0' && *s <= '9')
	{
		return (isint(s + 1));
	}
	else if (*s == '\0')
	{
		return (1);
	}
	return (0);
}
/**
 * main - Main entry point
 * @argc: int.
 * @argv: char arr.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
	{
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (isint(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
