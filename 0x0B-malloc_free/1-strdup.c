#include "main.h"

#include <stdlib.h>

/**
 * _strdup - function to duplicate a string
 * @str: string to duplicate
 *
 * Return: Duplicated string on success
 * or null on error
 */

char *_strdup(char *str)
{
	int i,j = 0;
	char *s;

	while (str[i])
	{
		i++;
	}

	if (i == 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(*s) * i);
	for (; j <= i; j++)
	{
		if (s == NULL)
		{
			return (NULL);
		}
		s[j] = str[j];
	}
	return (s);
}
