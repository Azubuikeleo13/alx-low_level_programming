#include "dog.h"

#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - function
 * @d: struct dog
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(EXIT_SUCCESS);
	else if (d->name == NULL)
		d->name = "(nil)";
	else if (d->owner == NULL)
		d->owner = "(nill)";
	else
	{
		printf("Name: %s\nage: %f\nowner: %s\n", d->name, d->age, d->owner);
	}
}
