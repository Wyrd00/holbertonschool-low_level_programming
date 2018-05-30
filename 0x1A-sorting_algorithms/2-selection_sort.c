#include "sort.h"

/**
 * selection_sort - sort via finding minimum in array of integers
 * @array:
 * @size:
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	size_t min;

	if (array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			swap(&array[i], &array[min]);
			print_array(array, size);
		}
	}
}

/**
 * swap - swap two array elements
 * @array1: first array
 * @array2: second array
 */

void swap(int *array1, int *array2)
{
	int temp;
	temp = *array1;
	*array1 = *array2;
	*array2 = temp;
}
