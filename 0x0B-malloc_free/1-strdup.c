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
	int i, j;
	char *s;

	i = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	s = malloc(sizeof(char) * (i + 1));
	j = 0;
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
