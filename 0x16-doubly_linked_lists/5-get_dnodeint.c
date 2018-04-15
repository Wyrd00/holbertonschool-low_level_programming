#include "lists.h"
/**
 * get_dnodeint_at_index - get specific element at given index
 * @head: head of list
 * @index: index of the specific node
 * Return: specific element of list or else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *vagabond;
	unsigned int counter;

	counter = 0;

	if (head == NULL)
		return (NULL);

	vagabond = head;
	while (counter != index)
	{
		vagabond = vagabond->next;
		counter++;
		if (vagabond == NULL)
		{
			return (NULL);
		}
	}
	return (vagabond);
}
