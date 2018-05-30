#include "sort.h"

/**
 * partition - seperate num higher or lower than pivot
 * @array: array of int
 * @low: starting index
 * @high: last index
 * @size: size of array
 * Return: position of pivot
 */

int partition(int *array, ssize_t low, ssize_t high, size_t size)
{
	int pivot;
	ssize_t i, j;

	pivot = array[high];
	i = low - 1;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			print_array(array, size);
		}
	}
	swap(&array[i + 1], &array[high]);
	return (i + 1);
}

/**
 * quickSort - call parition on array
 * @array: array of int
 * @low: start of subarray
 * @high: end of subarray
 * @size: size of array
 */

void quickSort(int *array, ssize_t low, ssize_t high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		quickSort(array, low, pivot - 1, size);
		quickSort(array, pivot + 1, high, size);
	}
}

/**
 * quick_sort - swap array via quick method
 * @array: array of int
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quickSort(array, 0, size - 1, size);
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
