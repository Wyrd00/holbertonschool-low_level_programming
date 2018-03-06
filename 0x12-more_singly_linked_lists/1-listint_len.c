#include "lists.h"

size_t listint_len(const listint_t *h)
{
	int num_elem = 0;

	while (h != NULL)
	{
		h = h->next;
		num_elem++;
	}
	return (num_elem);
}
