#include "search_algos.h"

/*
 * linear_search - search sorted array linearly
 * @array: array to search through
 * @size: size of array
 * @value: target value to find
 * Return: index of target value, or -1 if unsucessful
 */

int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (array == NULL)
        return (-1);

    i = 0;
    for (i = 0; i <= size - 1; i++)
    {
        printf("Value checked array [%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }
    return (-1);
}
