#include "main.h"

/**
 * _putchar - writes the character c as output 
 */
int main(void)
{
	char a[] = "_putchar\n";

	int i = 0;

	while (a[i] != '\0')
	{
		_putchar(a[i]);
		i++;
	}
	return (0);
}
