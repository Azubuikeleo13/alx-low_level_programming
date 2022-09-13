#include "main.h"

/**
 * print_alphabet_x10 - Print the english alphabet in 10 rows
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int r = 1;

	while (r < 11)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}

		_putchar('\n');
		r++;
	}
}
