#include "main.h"

/**
 * _realloc - Function to reallocate a new block of memory
 * @ptr: Null pointer
 * @old_size: Old size of memory
 * @new_size: New size of memory
 *
 * Return: null
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);

		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);

	ptr = malloc(new_size);

	return (ptr);
}
