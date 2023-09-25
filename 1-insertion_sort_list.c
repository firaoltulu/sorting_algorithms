#include "sort.h"

/**
 *local_swap_node - This Function swap nodes in the doubly linked list.
 *@one: listint_t pointer that points to the node.
 *@two: nlistint_t pointer that points to the node list.
 *Return: return a pointer to a node which was enter it.
 */
listint_t *local_swap_node(listint_t *one, listint_t **two)
{
	listint_t *three = one->prev;
	listint_t *four = one;

	three->next = four->next;
	if (four->next)
		four->next->prev = three;
	four->next = three;
	four->prev = three->prev;
	three->prev = four;
	if (four->prev)
	{
		four->prev->next = four;
	}
	else
	{
		*two = four;
	}
	return (four);
}

/**
 * insertion_sort_list - This Function sorts a doubly linked list
 * of integers in ascending order using the Insertion sort algorithm.
 * @list: Dobule linked list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *one;

	if (list == NULL || (*list)->next == NULL)
	{
		return;
	}
	else
	{
		one = (*list)->next;
		while (one)
		{
			while ((one->prev) && (one->prev->n > one->n))
			{
				one = local_swap_node(one, list);
				print_list(*list);
			}
			one = one->next;
		}
	}
}
