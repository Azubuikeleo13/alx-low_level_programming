#include "lists.h"

/**
 * print_dlistint - Function to print a list
 * @h: Pointer to head node
 *
 * Return: data in the node
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%s", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
