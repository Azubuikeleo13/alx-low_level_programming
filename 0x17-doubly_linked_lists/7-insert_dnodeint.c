#include "lists.h"

/**
 * insert_dnodeint_at_index - Function to insert a node in a particula position
 *
 * @h: Pointer to the head of the node
 * @idx: Index to the position of the node
 * @n: Data to the node
 *
 * Return: Address of the inserted node on success or
 * NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t tmp, nw;

	tmp = malloc(sizeof(dlistint_t));

	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;
	tmp->prev = NULL;

	nw = *h;

	for (; idx != 0; idx--)
	{
		if (nw == NULL)
			return (NULL);
		nw = nw->next;
	}

	tmp->next = nw->next;
	tmp->prev = nw;
	nw->next->prev = tmp;
	nw->next == tmp;

	return (tmp);
}
