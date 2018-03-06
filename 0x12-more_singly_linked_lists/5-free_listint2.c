#include "lists.h"

/**
 * free_listint2 - free when *head is NULL
 * @head: pointer to list
 * Return: nada
 */

void free_listint2(listint_t **head)
{
	listint_t *vagabond;
	listint_t *vagahead;

	if (head == NULL)
		return;

	vagahead = *head;
	while (vagahead != NULL)
	{
		vagabond = vagahead->next;
		free(vagahead);
		vagahead = vagabond;
	}
	*head = NULL;
}
