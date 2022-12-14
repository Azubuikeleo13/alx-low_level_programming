#include "lists.h"

/**
 * add_nodeint_end - Function to add node at the end
 *
 * @head: Pointer to the head node
 * @n: Data of the new node
 *
 * Return: Address to the inserted node on success or
 * NULL on failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *chk;

	tmp = malloc(sizeof(listint_t));

	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;

	if (*head == NULL)
		*head = tmp;
	else
	{
		chk = *head;
		while (chk->next != NULL)
			chk = chk->next;
		chk->next = tmp;
	}

	return (*head);
}
