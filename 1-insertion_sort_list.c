#include "sort.h"

/**
 * swap_node - function that swap node
 * @prmCurrent: current node
 * Return - nothing void
 */

void swap_node(listint_t **prmCurrent)
{
	listint_t *previous, *after;

	previous = (*prmCurrent)->prev;
	after    = (*prmCurrent)->next;

	if (after->next != NULL)
		after->next->prev = (*prmCurrent);
	(*prmCurrent)->next = after->next;
	after->prev = previous;
	after->next = (*prmCurrent);
	(*prmCurrent)->prev = after;

	if (previous == NULL)
		*prmCurrent = (*prmCurrent)->prev;
	else
		previous->next = after;
}

/**
 * insertion_sort_list - function that sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @prmList: pointer to list to sort
 * Return: nothing void
 */

void insertion_sort_list(listint_t **prmList)
{
	listint_t *current = *prmList, *after;

	if (prmList == NULL || *prmList == NULL || (*prmList)->next == NULL)
		return;

	while (current != NULL)
	{
		after = current->next;
		if (after != NULL && current->n > after->n)
		{
			swap_node(&current);

			if (current->prev != NULL)
				current = *prmList;
			else
				*prmList = current;

			print_list(*prmList);
			continue;
		}

		current = current->next;
	}
}
