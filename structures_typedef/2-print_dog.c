#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - gay
 * @name: gay
 * @age: gay
 * @owner: gay
 * Description: something gay
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: ");
	if (d->name == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", (*d).name);
	printf("Age: ");
	if (!d->age)
		printf("(nil)\n");
	else
		printf("%f\n", (*d).age);
	printf("Owner: ");
	if(d->owner == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", (*d).owner);
}
