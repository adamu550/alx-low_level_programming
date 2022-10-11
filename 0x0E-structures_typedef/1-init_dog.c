#include "dog.h"

/**
 * init_dog - initializes a struct of dog
 * @d: Pointer to structure
 * @name: Pointer to the name
 * @age: Age
 * @owner: Pointer to owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
