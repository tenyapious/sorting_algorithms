#include "sort.h"

/**
 * swap_nodes - Swap two nodes
 * @list: pointer to head of list
 * @node1: pointer to first node
 * @node2: pointer to second node
 */
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
	if (node2->next != NULL)
		node2->next->prev = node1;
	if (node1->prev != NULL)
		node1->prev->next = node2;
	node1->next = node2->next;
	node2->prev = node1->prev;
	node1->prev = node2;
	node2->next = node1;
	if (node2->prev == NULL)
		*list = node2;
}

/**
 * insertion_sort_list - sort doubly linked list
 * of integers in ascending order
 * @list: pointer to head of list
 **/
void insertion_sort_list(listint_t **list)
{
	listint_t *node1 = *list, *node2 = (*list)->next;

	if (list == NULL || node1 ==  NULL || node2 == NULL)
		return;

	while (1)
	{
		if (node1->n > node2->n)
		{
			swap_nodes(list, node1, node2);
			if (node2->prev == NULL)
			{
				if (node1->next == NULL)
					return;
				node2 = node1->next;
			}
			else
				node1 = node2->prev;
			print_list(*list);
		}
		else if (node2->next != NULL)
		{
			node1 = node2;
			node2 = node2->next;
		}
		else
			return;
	}
}
