#include "lists.h"

/**
 * pop_listint - Function to delete a node and get the data
 *
 * @head: Pointer to the head node
 *
 * Return: data of the node
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int dta;

	if (*head == NULL)
		return (0);

	tmp = *head;
	dta = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (dta);
}
