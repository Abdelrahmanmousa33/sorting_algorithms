#ifndef SORT_H
#define SORT_H
#include <stdbool.h>
#include <stdio.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
/**
 * swap_ints - Swap two ints in an array.
 * @a: The first int to swap.
 * @b: The second.
 */
void swap_ints(int *a, int *b);
void insertion_sort_list(listint_t **list);
void swap_nodes(listint_t **n1, listint_t **n2, listint_t **h);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
int lomuto_partition(int *array, size_t size, int left, int right);
void lomuto_sort(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);
#endif

