#include "sort.h"

void swap_ints(int *a, int *b);
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
/**
 * quick_sort - Sort an array of integers in ascending
 *              order using the quicksort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	lomuto_part(array, 0, size - 1, size);
}
/**
 * lomuto_part - divide an array according to lomuto scheme
 * @array: The array of integers.
 * @size: The size of the array.
 * @start: The starting index of the subset to order.
 * @end: The ending index of the subset to order.
 */

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
			left++;
		}
		right++;
	}
	print_array(array, size);
	lomuto_part(array, 0, left - 2, size);
	lomuto_part(array, left, end, size);
}
