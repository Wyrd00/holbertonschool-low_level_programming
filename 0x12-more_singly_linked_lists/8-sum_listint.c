#include "lists.h"

/**
 * sum_listint - add up all the data in list
 * @head: pointer to head of list
 * Return: sum of all data
 */

int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *vagabond;

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
