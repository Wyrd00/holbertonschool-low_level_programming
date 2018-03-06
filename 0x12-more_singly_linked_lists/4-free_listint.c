#include "lists.h"

/**
 * free_listint - free
 * @head: pointer to list
 * Return: nada
 */

void free_listint(listint_t *head)
{
	listint_t *vagabond;

	while (head != NULL)
	{
		vagabond = head->next;
		free(head);
		head = vagabond;
	}
}
