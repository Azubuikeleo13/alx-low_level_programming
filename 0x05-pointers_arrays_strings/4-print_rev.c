#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: character to check
 */

void print_rev(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')

		i++;

	for (i -= 1; i >= 0; i--)

		_putchar(s[i]);

	_putchar('\n');
}
