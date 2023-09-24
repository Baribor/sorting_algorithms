#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list
 * in ascending order
 *
 * @list: The doubly linked list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *cur, *temp, *nxt;

	if (!list || !*list)
		return;

	nxt = *list;

	for (; nxt;)
	{
		cur = nxt;
		nxt = nxt->next;
		while (cur->prev && cur->n < cur->prev->n)
		{
			temp = cur->prev;
			if (cur->next)
				cur->next->prev = temp;
			if (temp->prev)
				temp->prev->next = cur;

			temp->next = cur->next;
			cur->prev = temp->prev;
			temp->prev = cur;
			cur->next = temp;
			if (!cur->prev)
				*list = cur;
			print_list(*list);
		}
	}
}
