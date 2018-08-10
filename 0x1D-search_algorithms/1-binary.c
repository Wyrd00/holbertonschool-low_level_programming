#include "search_algos.h"

/**
 * print_arr - print the array
 * @array: array
 * @left: leftmost of array being search
 * @right: rightmost of array being searched
 */

void print_arr(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i != right)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - search sorted array logarithmic style
 * @array: array to search through
 * @size: size of array
 * @value: target value to find
 * Return: index of target value, or -1 if unsucessful
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid;
	size_t left;
	size_t right;

	if (array == NULL || size == 0)
		return (-1);

	left = 0;
	right = size - 1;
	mid = 0;

	while (left <= right)
	{
		mid = (left + right) / 2;

		print_arr(array, left, right);
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
