#include "lists.h"
/**
 * get_nodeint_at_index - return nth node
 * @head: pointer to list
 * @index: nth node
 * Return: Null if node doesn't exist, or value of nth node if success
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int nth = 0;

	if (head == NULL)
		return (NULL);

	current = head;
	while (nth != index)
	{
		nth++;
		current = current->next;
		if (current == NULL)
			return (NULL);
	}
	return (current);
}
