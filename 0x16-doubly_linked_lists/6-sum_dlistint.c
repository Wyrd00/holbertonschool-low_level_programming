#include "lists.h"
/**
 * sum_dlistint - 
 * @head: 
 * Return: 
 */
int sum_dlistint(dlistint_t *head)
{
        dlistint_t *vagabond;
        int total;

        total = 0;
        if (head == NULL)
                return (0);

        vagabond = head;
        while (vagabond != NULL)
        {
                total += vagabond->n;
                vagabond = vagabond->next;
        }
        return (total);
}
