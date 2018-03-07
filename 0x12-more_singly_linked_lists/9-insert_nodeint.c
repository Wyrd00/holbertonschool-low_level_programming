#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node at given posiition
 * @head: pointer to beginning of list
 * @idx: index of list where new node should be added
 * @n: value of new node
 * Return: address of new node at index idx, otherwise NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *vagabond;
	unsigned int current_i = 0;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	vagabond = *head;
	/*if my list is empty, but my idx got shiet*/
	if (vagabond == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		return (new_node);
	}
	/*list not empty and node need to be in beginning*/
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (current_i != (idx - 1))
	{
		vagabond = vagabond->next;
		current_i++;
		if (vagabond == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = vagabond->next;
	vagabond->next = new_node;
	return (new_node);
}
