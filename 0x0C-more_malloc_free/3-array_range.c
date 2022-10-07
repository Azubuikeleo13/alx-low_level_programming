#include "main.h"

/**
 * array_range - Function to print range of arrays
 * @min: Minimum number
 * @max: Maximum number
 *
 * Return: Pointer to the new created array
 * or null on failure
 */

int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
