#include "lists.h"

/**
 * free_list - Function to free a linked list
 *
 * @head: Head pointer of a list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t tmp = head;

	while (tmp)
	{
		free(tmp);
		tmp = tmp->next;
	}

	free(tmp);
}
