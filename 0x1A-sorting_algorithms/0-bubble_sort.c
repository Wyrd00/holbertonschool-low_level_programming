#include "sort.h"

/**
 * bubble_sort - sort an array bubble style
 * @array: array to sort through
 * @size: unsigned int representing size of array
 */

void bubble_sort(int *array, size_t size)
{
	/*i for loop, n carries changes for array_iteration*/
	/*array_iteration will keep decreasing in size till it is 0*/
	size_t i, n;
	size_t array_iteration;

	if (array == NULL || size < 2)
		return;

	array_iteration = size;
	n = size;

	while (array_iteration > 0)
	{
		n = 0;
		for (i = 0; i < array_iteration - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swapper = array[i];
				array[i] = array[i + 1];
				array[i + 1] = swapper
				print_array(array, size);
				n = array_iteration - 1;
			}
		}
		array_iteration = n;
	}
}
