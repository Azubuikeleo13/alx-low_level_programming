#include "main.h"

#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to the newly concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i = 0, j = 0;
	char *s;

	if (s1 == NULL)
	{
		len1 = 1;
	}
	else if (s2 == NULL)
	{
		len2 = 1;
	}
	else
	{
		while (s1[len1] != '\0')
		{
			len1++;
		}
		while (s2[len2] != '\0')
		{
			len2++;
		}
	}
	s = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (; i < len1; i++)
	{
		s[i] = s1[i];
	}
	for (; j < len2; j++)
	{
		s[i + j] = s2[j];
	}
	s[i + j + 1] = '\0';
	return (s);
}
