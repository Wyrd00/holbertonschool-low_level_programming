#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at given index
 * @head: pointer to pointer to beginning of list
 * @index: index of node that should be deleted
 * Return: 1 if success, -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *vagabond, *vamoosh;
	unsigned int current_i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	vagabond = *head;
	if (index == 0)
	{
		*head = vagabond->next;
		free(vagabond);
		return (1);
	}
	while (current_i != (index - 1))
	{
		vagabond = vagabond->next;
		current_i++;
		if (vagabond == NULL)
			return (-1);
	}
	vamoosh = vagabond->next;
	vagabond->next = vamoosh->next;
	free(vamoosh);
	return (1);
}
