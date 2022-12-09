#include "lists.h"

/**
 * get_nodeint_at_index - Function to get anode at an index
 *
 * @head: Pointer to the head node
 * @index: Position of the wanted node
 *
 * Return: Address of the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;

	tmp = head;

	for (; index != 0; index--)
	{
		if (tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	return (tmp);
}
