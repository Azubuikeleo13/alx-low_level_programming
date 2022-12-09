#include "lists.h"

/**
 * free_listint - function to free a list
 *
 * @head: Pointer to the head
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
