#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - gay
 * @format: str
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	va_list ptr;
	
	va_start(ptr, format);
	while (format && format[i])
	{
		switch (format[i++])
		{
			case 'c':
				printf("%c", va_arg(ptr, int));
				break;
			case 'i':
				printf("%i", va_arg(ptr, int));
				break;
			case 's':
				str = va_arg(ptr, char *);
				if (str)
				{
					printf("%s", str);
				}
				else
				{
					printf("(nil)");
				}
				break;
			case 'f':
				printf("%f", va_arg(ptr, double));
				break;
			default:
				continue;
		}
		if (format[i])
		{
			printf(", ");
		}
	}
	va_end(ptr);
	printf("\n");
}
