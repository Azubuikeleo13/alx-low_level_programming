#include "function_pointers.h"

/**
 * array_iterator - function to carry out action
 *
 * @array: Array of elements
 * @size: Number of elements
 * @action: Pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (size < 1 || array == NULL || action == NULL)
		return;

	for (i = 0; i <= size; i++)
		action(array[i]);
}
