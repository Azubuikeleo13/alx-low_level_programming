#include "lists.h"

/**
 * sum_listint - Function to get the sum of all data in a list
 *
 * @head: Pointer to the head
 *
 * Return: Sum
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int summ = 0;

	tmp = head;

	while (tmp)
	{
		summm += tmp->n;
		tmp = tmp->next;
	}
	return (summ);
}
