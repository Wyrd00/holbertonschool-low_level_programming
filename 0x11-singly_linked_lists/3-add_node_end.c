#include "lists.h"
#include <string.h>

/**
 * _strlen - get string length
 * @s: string
 * Return: len
 */

int _strlen(const char *s)
{
	int len = 0;

	while (*(s + len))
		len++;

	return (len);
}

/**
 * add_node_end - add new node at end of list
 * @head: - pointer to pointer to head
 * @str: string to be duplicated to new node
 * Return: address of new node, NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *vagabond_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (*head->str == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	vagabond_node = *head;

	while (vagabond_node->next != NULL)
		vagabond_node = vagabond_node->next;

	vagabond_node->next = new_node;
	return (*head);
}
