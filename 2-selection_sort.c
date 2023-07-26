#include "sort.h"
/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */

void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - Sort an array of integers in ascending order
 *                  with the selection sort
 * @array: An array of integers.
 * @size: The size of the array.
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, in_place = 0;
	int tmp = array[0];
	bool swap = false;

	for (i = 0; i < size; i++)
	{
		in_place = 0;
		tmp = array[i];
		swap = false;
		for (j = i; j < size; j++)
		{
			if (array[j] < tmp)
			{
				in_place = j;
				tmp = array[j];
				swap = true;
			}
		}
		if (i == 0 && swap == false)
			return;
		if (i != size - 1 && swap == true)
		{
			swap_ints(&array[i], &array[in_place]);
			print_array(array, size);
		}
	}
}
