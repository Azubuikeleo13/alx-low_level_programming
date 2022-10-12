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
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);

		array++;
	}
}
