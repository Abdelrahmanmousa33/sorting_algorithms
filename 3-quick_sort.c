#include "sort.h"

void swap_ints(int *a, int *b);
void quick_sort(int *array, size_t size);
void lomuto_part(int *array, int start, int end, size_t size);
/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 * 7, 48, 99, 71, 13, 52, 96, 73, 86, 19
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
void quick_sort(int *array, size_t size)
{
	lomuto_part(array, 0, size - 1, size);
}

void lomuto_part(int *array, int start, int end, size_t size)
{
	int left = start;
	int right = start;
	int pivot;


	if (start >= end)
		return;

	pivot = array[end];
	while (right <= end)
	{
		if (array[right] <= pivot)
		{
			swap_ints(&array[right], &array[left]);
			print_array(array, size);
			left++;
		}
		right++;
	}
	lomuto_part(array, 0, left - 2, size);
	lomuto_part(array, left, end, size);
}
