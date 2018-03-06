#include "lists.h"

/**
 * listint_len - find number of elements in linked list
 * @h: pointer to list
 * Return: number of elem
 */

size_t listint_len(const listint_t *h)
{
	size_t num_elem = 0;

	while (h != NULL)
	{
		h = h->next;
		num_elem++;
	}
	return (num_elem);
}
