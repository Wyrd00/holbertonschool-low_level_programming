#include "lists.h"
/**
 * add_nodeint - add new node beginning of doubly linked list
 * @head: pointer to head of list
 * @n: value of node
 * Return: address of new node or else NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
        dlistint_t *new;

        if (head == NULL)
                return (NULL);

        new = malloc(sizeof(dlistint_t));
        if (new == NULL)
                return (NULL);
        new->n = n;
        new->prev = NULL;
        new->next = *head;

        if (*head != NULL)
        {
                (*head)->prev = new;
        }
        *head = new;
        return (new);
}
