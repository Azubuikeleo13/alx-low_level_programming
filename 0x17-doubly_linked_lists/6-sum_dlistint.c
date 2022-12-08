#include "lists.h"

/**
 * sum_dlistint - Function to get sum of all values in the list
 *
 * @head: Pointer to the head of the list
 *
 * Return: The sum of the values on success or
 * 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!(head))
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
