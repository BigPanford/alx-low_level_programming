#include "lists.h"

/**
 * listint_len - returns number of elements in the linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: Nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t d = 0;

	while (h)
	{
		d++;
		h = h->next;
	}

	return (d);
}
