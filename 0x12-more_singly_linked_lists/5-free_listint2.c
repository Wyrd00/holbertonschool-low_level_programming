#include "lists.h"

/**
 * free_listint2 - free when *head is NULL
 * @head: pointer to list
 * Return: nada
 */

void free_listint2(listint_t **head)
{
	listint_t *vagabond;

	if (head == NULL || *head == NULL)
		return;

	vagabond = *head;
	while (vagabond != NULL)
	{
		vagabond = (*head)->next;
		free(*head;
		*head = vagabond;
	}
	*head = NULL;
}
