#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dog.h"
/**
 * new_dog - gay
 * @name: gay
 * @age: gay
 * @owner: gay
 * Return: something gay
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	(*dog).name = malloc(strlen(name) + 1);
	if ((*dog).name == NULL)
	{
		free((*dog).name);
		free(dog);
		return (NULL);
	}
	(*dog).age = age;
	(*dog).owner = malloc(strlen(owner) + 1);
	if ((*dog).owner == NULL)
	{
		free((*dog).owner);
		free((*dog).name);
		free(dog);
		return (NULL);
	}
	strcpy((*dog).name, name);
	strcpy((*dog).owner, owner);
	return (dog);
}
