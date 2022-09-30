#include "main.h"

/**
 * _islower - Check for lowercase characters
 * @c: char type letter
 * Return: 1 if character is lowercase, 0 if otherwise
 */

int _islower(int c)

{

	if (c >= 'a' && c <= 'z')

		return (1);

	else

		return (0);

}
