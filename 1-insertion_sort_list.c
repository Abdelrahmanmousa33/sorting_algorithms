#include "sort.h"
/**
 * swap_nodes - swap two nodes without swapping the values.
 * @A: first node
 * @B: secound node
 * @h: the head node
 *
 */

void swap_nodes(listint_t **A, listint_t **B, listint_t **h)
{
	listint_t *first_node_prev = (*A)->prev;
	listint_t *sec_node_next = (*B)->next;

	(*A)->prev = (*B);
	(*A)->next = sec_node_next;
	(*B)->prev = first_node_prev;
	(*B)->next = *A;
	if (first_node_prev != NULL)
	{
		first_node_prev->next = (*B);
	}
	else
		(*h) = (*B);
	if (sec_node_next != NULL)
	{
		sec_node_next->prev = (*A);
	}
}
/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *                       using the insertion sort algorithm.
 * @list: A pointer to the head of a doubly-linked list of integers.
 *
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *curr = *list;
	listint_t *next = curr->next;
	bool swap = false;

	while (curr != NULL)
	{
		curr = *list;
		next = curr->next;
		swap = false;
		while (next != NULL)
		{
			if (curr->n > next->n)
			{
				swap_nodes(&curr, &next, list);
				print_list(*list);
				swap = true;
				break;
			}
			curr = curr->next;
			next = next->next;
		}

			if (swap == false && curr->next == NULL)
				break;
	}
}
