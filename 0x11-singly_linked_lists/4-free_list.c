#include "lists.h"

/**
 * free_list - free a list_t list
 * @head: pointer head
 *
 */

void free_list(list_t *head)
{
	list_t *vagabond;

	while (head != NULL)
	{
		vagabond = head->next;
		free(head->str);
		free(head);
		head = vagabond;
	}
}
