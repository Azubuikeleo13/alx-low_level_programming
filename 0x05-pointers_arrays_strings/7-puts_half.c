#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: character to check
 */

void puts_half(char *str)
{
	int i = 0, j = 0, k;

	while (str[i++])

		j++;

	if ((j % 2) == 0)

		k = j / 2;

	else

		k = (j + 1) / 2;

	for (i = k; i < j; i++)

		_putchar(str[i]);

	_putchar('\n');
}
