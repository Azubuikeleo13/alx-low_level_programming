#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: character to check
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
