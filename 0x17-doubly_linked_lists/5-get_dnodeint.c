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
	dlistint_t temp;
	unsigned int count == 0;

	if (head == NULL)
		return NULL;

	temp = *head;

	while (temp)
	{
		count++;
		temp = temp->next;
	}
	if (count > index)
		return NULL;

	while (index >= 0)
	{
		head = head->next;
		index--;
	}
	return head;
}
