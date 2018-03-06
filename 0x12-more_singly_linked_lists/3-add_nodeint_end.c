#include "lists.h"

/**
* add_nodeint_end - add a node to the end of the list
* @head: head of the node list
* @n: value of new node
* Return: list with new node insertion at the end of list
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node;
	listint_t *vagabond;

	end_node = malloc(sizeof(listint_t));

	if (end_node == NULL)
		return (NULL);

	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}

	vagabond = *head;
	while (vagabond->next != NULL)
	{
		vagabond = vagabond->next;
	}

	vagabond->next = end_node;
	return (end_node);
}
