#include "lists.h"

/**
 * print_dlistint - Function to print a list
 * @h: Pointer to head node
 *
 * Return: data in the node
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
