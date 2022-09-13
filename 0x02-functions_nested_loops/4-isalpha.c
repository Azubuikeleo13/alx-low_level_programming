#include "main.h"

/**
 * _isalpha - Check for upper case characters
 * @c: character to check
 * Return: 1 if letter, lowercase or upper case, 0 if otherwise
 */

int _isalpha(int c)

{

	if (c >= 'a' && c <= 'z')

		return (1);

	else if (c >= 'A' && c <= 'Z')

		return (1);

	else

		return (0);

}
