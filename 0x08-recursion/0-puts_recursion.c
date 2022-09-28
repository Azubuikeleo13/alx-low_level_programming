#include "main.h"

/**
 * _puts_recursion - function to print string
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	if (*s  != '\0')
	{
		_putchar(*s);
		_put_recursion(s + 1);
	}
}
