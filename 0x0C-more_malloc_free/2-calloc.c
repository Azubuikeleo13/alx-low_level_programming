#include "main.h"

/**
 * _calloc - Function for creating memory space
 * @nmemb: Number of members
 * @size: Size of each members
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	char *s;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	s = malloc(nmemb * size);
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	for (; i <= nmemb; i++)
	{
		s[i] = 0;
	}
	return (s);
}
