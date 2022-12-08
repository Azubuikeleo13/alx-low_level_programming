#include "lists.h"

/**
 * add_dnodeint - Function to add a new node a head of list
 *
 * @head: Pointer to head of node
 * @n: data of the new node
 *
 * Return: New head pointer on success or
 * Null on failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);

	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;
	temp->next = (*head);
	if (*head != NULL)
		(*head)->prev = temp;
	*head = temp;

	return (temp);
}
