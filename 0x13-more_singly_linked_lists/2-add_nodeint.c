#include "lists.h"

/**
 * add_nodeint - Function tp add a node at the head of a list
 *
 * @head: Pointer to the head of the list
 * @n: Data of the node
 *
 * Return: Address of the new element or
 * NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));

	if (tmp == NULL)
		return (NULL);

	tmp->n = n;

	tmp->next = *head;
	*head = tmp;

	return (tmp);
}
