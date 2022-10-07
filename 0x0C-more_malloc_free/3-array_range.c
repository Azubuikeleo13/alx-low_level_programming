#include "main.h"

/**
 * array_range - Function to print range of arrays
 * @min: Minimum number
 * @max: Maximum number
 *
 * Return: Pointer to the new created array
 */

int *array_range(int min, int max)
{
	int i;
	int *s;

	if (min > max)
	{
		return (NULL);
	}
	s = malloc(sizeof(int) * (max - (min) + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	for (; i <= (max); i++, min++)
	{
		*(s + i) = min;
	}
	return (s);
}
