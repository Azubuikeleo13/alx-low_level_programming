#include "lists.h"

/**
 * insert_nodeint_at_index - Function to add a node at an index
 *
 * @head: Pointer to the head node
 * @idx: index position to add the node
 * @n: data of the of the new node
 *
 * Return: Address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *chk;

	tmp = malloc(sizeof(listint_t));

	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;

	chk = *head;

	for (; index != 0; index--)
	{
		if (chk->next == NULL)
			return (NULL);
		chk = chk->next;
	}
	tmp->next = chk;
	tmp = chk;

	return (tmp);
}
