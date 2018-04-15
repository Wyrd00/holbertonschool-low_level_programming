#include "lists.h"
/**
 * free_dlistint - free list
 * @head: beginning of list
 */
void free_dlistint(dlistint_t *head)
{
        dlistint_t *vagabond;

        if (head != NULL)
        {
                vagabond = head->next;
                free(vagabond);
                head = vagabond;
        }
}
