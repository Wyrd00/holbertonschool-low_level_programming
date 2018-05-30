#include "sort.h"

/**
 * selection_sort - sort via finding minimum in array of integers
 * @array: array of int
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	size_t min;
	int swapper;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			swapper = array[min];
			array[min] = array[i];
			array[i] = swapper;
			print_array(array, size);
		}
	}
}
