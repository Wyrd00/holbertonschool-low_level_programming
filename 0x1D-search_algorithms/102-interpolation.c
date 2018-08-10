#include "search_algos.h"

/*
 * print_arr - print array
 * @array - array
 * @mid - mid
 * @lo - lo
 * @hi - high
 */

void print_arr(int *array, size_t mid, size_t lo, size_t hi)
{
    if (mid <= hi && mid >= lo)
        printf("Value checked array [%lu] = [%d]\n", mid, array[mid]);
}

/*
 * interpolation_search - search sorted array (but in an improved binary way)
 * @array: array to search through
 * @size: size of array
 * @value: target value to find
 * Return: index of target value, or -1 if unsucessful
 */

int interpolation_search(int *array, size_t size, int value)
{
    size_t mid;
    size_t lo;
    size_t hi;

    lo = 0;
    hi = size - 1;
    mid = 0;

    if (array == NULL || size == 0)
        return (-1);

    while (array[hi] != array[lo] && value >= array[lo] && value <= array[hi])
    {
        mid = (lo + (value - array[lo]) * (hi - lo) / (array[hi] - array[lo]));
        print_arr(array, mid, lo, hi);
        if (value > array[mid])
            lo = mid + 1;
        else if (value < array[mid])
            hi = mid - 1;
        else
            return mid;
    }
    printf("Value checked array[%lu] is out of range\n", mid);
    return (-1);
}

