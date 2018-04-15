#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at specific index
 * @h: head of list
 * @idx: node at index
 * @n: value of new index
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *vagabond;
	unsigned int counter;

	counter = 0;
	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if ((*h)->next != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	vagabond = *h;
	while (counter != idx - 1)
	{
		vagabond = vagabond->next;
		counter++;
		if (vagabond == NULL)
			return (NULL);
	}
	new->prev = vagabond;
	new->next = vagabond->next;
	if (vagabond->next != NULL)
		new->next->prev = new;
	vagabond->next = new;
	return (new);
}
