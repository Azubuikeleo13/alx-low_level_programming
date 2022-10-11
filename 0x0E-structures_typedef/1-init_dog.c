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
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	if (d == NULL)
		exit(EXIT_FAILURE);

	d->name = name;
	d->owner = owner;
	d->age = age;
}
