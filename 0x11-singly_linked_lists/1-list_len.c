#include "lists.h"

/**
 * list_len - return number of elements in linked list
 * @h: pointer to the aformentioned struct list
 * Return: Number of nodes
 */

size_t list_len(const list_t *h)
{
        size_t num_of_elem = 0;
        const list_t *ptr;
        ptr = h;

        while (ptr != NULL)
        {
                ptr = ptr->next;
                num_of_elem++;
        }

        return (num_of_elem);
}
