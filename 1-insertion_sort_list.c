#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - Sorts doubly linked list of integer in ascending order
 * @list: Pointer to the pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = (*list)->next;

	if (list == NULL || *list == NULL || **list == NULL || (*list)->next == NULL)
		return;
	while (current != NULL)
	{
		listint_t *next = current->next;
		listint_t *prev = current->prev;

		while (prev != NULL && prev->n > current->n)
		{
			prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = prev;
			current->prev = prev->prev;
			current->next = prev;

			if (prev->prev != NULL)
				prev->prev->next = current;
			else
				*list = current;
			prev->prev = current;
			print_list(*list);
			prev = current->prev;
		}
		current = next;
	}
}
