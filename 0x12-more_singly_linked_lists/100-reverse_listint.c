#include "lists.h"

/**
 * reverse_listint - reverse linked list
 * @head: pointer to head of linked list
 * Return: reversed linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *first, *rest;

	if (head == NULL || *head == NULL)
		return (NULL);

	first = *head;
	rest = first->next;

	if (rest == NULL)
		return (NULL);

	reverse_listint(&rest);
	first->next->next = first;

	first->next = NULL;

	*head = rest;
	return (*head);
}
