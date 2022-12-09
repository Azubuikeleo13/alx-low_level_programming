#include "lists.h"

/**
 * print_listint - Function to print a list
 *
 * @h: Pointer to the head of the list
 *
 * Return: the data item of the list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while(h)
	{
		count++;
		printf("%d", h->n);
		h = h->next;
	}
	return (count);
}
