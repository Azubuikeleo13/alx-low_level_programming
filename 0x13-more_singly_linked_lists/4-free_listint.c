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
	while (head)
	{
		free(head);
		head = head->next;
	}
	free(head);
}
