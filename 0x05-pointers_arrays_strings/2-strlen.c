#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: character to check
 * Return: length
 */

int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;

	return (length);
}
