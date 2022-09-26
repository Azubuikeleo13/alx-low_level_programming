#include "main.h"

/**
 * _putchar - write the character c to stdout
 *
 * @c: character to print
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
