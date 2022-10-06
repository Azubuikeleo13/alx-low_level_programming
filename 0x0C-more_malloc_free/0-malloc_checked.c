#include "main.h"

/**
 * malloc_checked - Function to create memory allocation
 * @b: Size to create
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);

	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
