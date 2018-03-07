#include "lists.h"

/**
 * pop_listint - deletes head node of list before returning node's data
 * @head: pointer to head of list
 * Return: data of nth node
 */

int pop_listint(listint_t **head)
{
	listint_t *vagabond;
	int data = 0;

	if (head == NULL || *head == NULL)
		return (0);

	vagabond = *head;
	data = vagabond->n;
	*head = vagabond->next;
	free(vagabond);
	return (data);
}
