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
	int dta;

	if (*head == NULL)
		return (0);

	dta = (*head)->n;

	free(*head);
	return (dta);
}
