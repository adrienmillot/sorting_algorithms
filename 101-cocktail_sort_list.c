#include "sort.h"

/**
 * swap_node_after - swap current node with next one
 * @prmCurrent: current node
 * Return: nothing void
 */

void swap_node_after(listint_t **prmCurrent)
{
	listint_t *previous, *after;

	previous = (*prmCurrent)->prev;
	after = (*prmCurrent)->next;

	if (previous != NULL)
		previous->next = after;
	after->prev = previous;
	(*prmCurrent)->prev = after;
	(*prmCurrent)->next = after->next;
	after->next = (*prmCurrent);
	if ((*prmCurrent)->next != NULL)
		(*prmCurrent)->next->prev = *prmCurrent;
}

/**
 * swap_node_before - swap current node with previous one
 * @prmCurrent: current node
 * Return: nothing void
 */

void swap_node_before(listint_t **prmCurrent)
{
	listint_t *previous, *after;

	previous = (*prmCurrent)->prev;
	after = (*prmCurrent)->next;

	(*prmCurrent)->prev = previous->prev;
	(*prmCurrent)->next = previous;
	previous->prev = (*prmCurrent);
	previous->next = after;
	if ((*prmCurrent)->prev != NULL)
		(*prmCurrent)->prev->next = (*prmCurrent);
	if (after != NULL)
		after->prev = previous;
}

/**
 * cocktail_sort_list - function that sorts a doubly linked list of
 * integers in ascending order using the Cocktail shaker sort algorithm
 * @list: pointer to list to sort
 * Return: nothing void
 */

void cocktail_sort_list(listint_t **list)
{
	int swapped;
	listint_t *head = *list;

	do {
		swapped = 0;

		while (head->next != NULL)
		{
			if (head->n > head->next->n)
			{
				swap_node_after(&head);
				print_list(*list);
				swapped = 1;
				continue;
			}
			head = head->next;
		}

		if (swapped == 0)
			break;

		swapped = 0;

		while (head->prev != NULL)
		{
			if (head->n < head->prev->n)
			{
				swap_node_before(&head);
				if (head->prev == NULL)
					*list = head;
				print_list(*list);
				swapped = 1;
				continue;
			}
			head = head->prev;
		}
	} while (swapped == 1);
}
