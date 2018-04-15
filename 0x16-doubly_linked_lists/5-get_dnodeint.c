#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
        dlistint_t *vagabond;
        unsigned int counter;

        counter = 0;

        if (head == NULL)
                return (NULL);

        vagabond = head;
        while (counter != index)
        {
                vagabond = vagabond->next;
                counter++;
                if (vagabond == NULL)
                {
                        return (NULL);
                }
        }
        return (vagabond);        
}
