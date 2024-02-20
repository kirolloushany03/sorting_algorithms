#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 *                      order using the Insertion sort algorithm.
 * @list: A pointer to a pointer to the head of the linked list.
 **/
void insertion_sort_list(listint_t **list)
{
	listint_t *current; /* Traverses list */
	listint_t *temp;    /* Holds temp values */

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = *list;
	current = current->next;

	while (current != NULL)
	{
		while (current->prev != NULL && current->n < current->prev->n)
		{
			temp = current;

			if (current->next != NULL)
				current->next->prev = temp->prev;
			current->prev->next = temp->next;

			current = current->prev;
			temp->prev = current->prev;
			temp->next = current;
			if (current->prev != NULL)
				current->prev->next = temp;
			current->prev = temp;

			/* If node is new head of list, set it to *list */
			if (temp->prev == NULL)
				*list = temp;

			print_list(*list);
			current = current->prev;
		}
		current = current->next;
	}
}
