#include "sort.h"

/**
 * insertion_sort_list - sorts by insertion sort
 * @list: input list to sort
 * @pointer: previous node
 * @next: next node
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *pointer, *next;

	if (list && *list && (*list)->next)
	{
		temp = (*list)->next;
		pointer = temp->prev;
		nextt = temp->next;

		while (temp)
		{
			if (temp->n < pointer->n)
			{
				swap_list(pointer, temp, nextt, list);
			}
			temp = nextt;
			if (temp)
			{
				nextt = temp->next;
				pointer = temp->prev;
			}
		}
	}
}

/**
 * swap_list - swap a linked list
 * @pn: previous node
 * @temp: temp
 * @nxt: next node
 * @h: head of list
 */
void swap_list(listint_t *pn, listint_t *temp, listint_t *nxt, listint_t **h)
{

	while (pn && temp->n < pn->n)
	{
		if (nxt)
			nxt->prev = pn;
		temp->next = pn;
		temp->prev = pn->prev;
		if (pn->prev)
			(pn->prev)->next = temp;
		pn->prev = temp;
		pn->next = nxt;
		nxt = pn;
		pn = temp->prev;
		if ((*h)->prev)
			*h = (*h)->prev;
		print_list(*h);
	}
}
