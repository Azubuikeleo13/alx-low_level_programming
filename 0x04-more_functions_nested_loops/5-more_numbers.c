#include "main.h"

/**
 * more_numbers - prints 10 times the numbers,
 * from 0 to 14, followed by a new line
 * Return - no return
 */

void more_numbers(void)
{
	int c, j;

	for (c = 1; c <= 10; c++)
	{

		for (j = 0; j < 15; j++)
		{

			if (j >= 10)

				_putchar('1');

			_putchar(j % 10 + '0');

		}

		_putchar('\n');

	}
}
