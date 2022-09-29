#include "main.h"

/**
 * _strlen_recursion - getting the length of a string
 * @s: string to get length
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;

		length += _strlen_recursion(s + 1);
	}
	return (length);
}
