#include "lists.h"

/**
 * free_dlistint - function to free up a list
 *
 * @head: Pointer to the head of the list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	while (head->next != NULL)
	{
		free(head);
		head = head->next;
	}
	free(head);
}
