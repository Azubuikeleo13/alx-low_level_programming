#include "dog.h"

/**
 * init_dog - Initializing a Structure
 *
 * @d: Pointer
 * @name: string
 * @age: Number
 * @owner: string
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *d;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
