#include "list.h"

/**
 * print_dlistint - Function to print a list
 * @h: Pointer to head node
 *
 * Return: data in the node
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *ptr;
	size_t count = 0;

	ptr = malloc(sizeof(dlistint_t));

	if (ptr == NULL)
		return (NULL);

	ptr = h;

	while (ptr != NULL)
	{
		printf("%s", ptr->n);
		count++;
		ptr = ptr->next;
	}

	return (count);
}