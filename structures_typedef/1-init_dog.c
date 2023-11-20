#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - gay
 * @d: gay
 * @name: gay
 * @age: gay
 * @owner: gay
 * Return: something gay
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
