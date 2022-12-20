#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly
 * linked list of ints in ascending order
 * @list: double pointer that points to list of elements
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *last, *tmp;

	if (list == NULL || (*list) == NULL || (*list)->next == NULL)
		return;
	
	current = (*list)->next;
	while (current)
	{
		last = current->prev;
		tmp = current->next;
		while (last && current->n < last->n)
		{
			if (last->prev)
				last->prev->next = current;
			last->next = current->next;
			current->next = last;
			current->prev = last->prev;
			last->prev = current;
			if (last->next)
				last->next->prev = last;
			if (!current->prev)
				(*list) = current;
			print_list(*list);
			last = current->prev;
		}
		current = tmp;
	}
}
