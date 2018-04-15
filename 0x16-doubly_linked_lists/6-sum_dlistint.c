#include "lists.h"
/**
 * sum_dlistint - add all int of nodes together
 * @head: list
 * Return: sum of list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *vagabond;
	int total;

	total = 0;
	if (head == NULL)
		return (0);

	vagabond = head;
	while (vagabond != NULL)
	{
		total += vagabond->n;
		vagabond = vagabond->next;
	}
	return (total);
}
