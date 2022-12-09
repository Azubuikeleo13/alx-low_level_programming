#include "lists.h"

/**
 * delete_nodeint_at_index - Function to delete node at an index
 *
 * @head: Pointer to the head
 * @index: Index position of pointer to be deleted
 *
 * Return: 1 on success,
 * -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;

	if (*head == NULL)
		return (-1);

	tmp = *head;

	for (; index != 0; index--)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
	}

	free(tmp);

	return (1);
}
