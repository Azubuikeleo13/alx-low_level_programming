#include "lists.h"

/**
 * get_dnodeint_at_index - function to get the node at a index
 *
 * @head: Pointer to the head of a node
 * @index: Position of the node
 *
 * Return: On success the node or
 * NULL on failure
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
