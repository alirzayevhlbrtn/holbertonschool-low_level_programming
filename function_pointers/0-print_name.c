#include <stdlib.h>
/**
 * print_name - gay
 * @name: gay
 * @f: gay
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		(*f)(name);
	}
}
