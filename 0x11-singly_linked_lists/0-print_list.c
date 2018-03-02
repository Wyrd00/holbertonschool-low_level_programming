#include "lists.h"

/**
 * print_list - prints all elements of list_t list
 * @h: the aformentioned list
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num_of_nodes = 0;
	const list_t *ptr;
	ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
		}
		ptr = ptr->next;
		num_of_nodes++;
	}

	return (num_of_nodes);
}
