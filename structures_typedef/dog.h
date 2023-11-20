#ifndef dog_H
#define dog_H
/**
 * struct dog - gay
 * @name: gay
 * @age: gay
 * @owner: gay
 * Description: something gay
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
