#include "lists.h"
/**
 * dlistint_len - number of nodes in list
 * @h: head of list
 * Return: total # of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
