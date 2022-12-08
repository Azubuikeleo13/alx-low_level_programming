#include "lists.h"

/**
 * add_dnodeint_end - Function to add a node at the end
 *
 * @head: Pointer to the Head of the node
 * @n: Data of the new node
 *
 * Return: Address of the new element on success on
 * NULL on failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t nw, tp;

	nw = malloc(sizeof(dlistint_t));

	if (!nw)
		return (NULL);

	tp = *head

	nw->prev = NULL;
	nw->n = n;
	nw->next = NULL;

	while (tp->next != NULL)
		tp = tp->next;

	tp->next = nw;
	nw->prev = tp;

	return (nw);
}
