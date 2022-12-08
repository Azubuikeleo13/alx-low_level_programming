#include "lists.h"

/**
 * delete_dnodeint_at_index - Function to delete a node at an index
 *
 * @head: Pointer to the head node
 * @index: position of the node to delete
 *
 * Return: Data of the deleted node
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t tmp;

	tmp = *head;

	while (index >= 0)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
		index--;
	}
	free(tmp);

	return (1);
}
