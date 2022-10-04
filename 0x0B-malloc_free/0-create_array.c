#include "main.h"

#include <stdlib.h>

/**
 * create_array - Function to create array
 * @size: size of array to be created
 * @c: character to create
 * Return: character created,
 * or NULL on error
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	i = 0;

	s = malloc(sizeof(char) * size);

	if (size == 0 || s == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
