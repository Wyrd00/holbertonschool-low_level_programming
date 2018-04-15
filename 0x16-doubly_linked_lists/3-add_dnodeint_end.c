#include "lists.h"

/**
 * add_dnodeint_end - add new node at end of doubly linked list
 * @head: pointer to head of list
 * @n: value of node
 * Return: address of new node or else NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *vagabond;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	vagabond = *head;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (vagabond->next != NULL)
	{
		vagabond = vagabond->next;
	}
	vagabond->next = new;
	new->prev = vagabond;
	return (new);
}
