#include "lists.h"

/**
 * dlistint_len - Function to print a list
 * @h: Pointer to head node
 *
 * Return: Number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
