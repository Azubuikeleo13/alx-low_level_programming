#include "lists.h"

/**
 * dlistint_len - Function to print a list
 * @h: Pointer to head node
 *
 * Return: Number of nodes
 */

size_t dlistint_len(const dlistint_t *h);
{
	dlistint_t *ptr;
	size_t count = 0;

	ptr = malloc(sizeof(dlistint_t));

	if (ptr == NULL)
		return (NULL);

	ptr = h;

	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
