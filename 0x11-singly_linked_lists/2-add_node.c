#include "lists.h"
#include <string.h>

/**
 * _strlen - get string length
 * @
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
 * add_node - add new node at beginning of list
 * @head: - pointer to pointer to head
 & @str: string to be duplicated to new node
 * Return: address of new node, NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
        list_t *new_node;

	if (head == NULL)
		return (NULL);

        new_node = malloc(sizeof(list_t));

        if (new_node == NULL)
                return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = *head;

	*head = new_node;
	return (*head);
}
