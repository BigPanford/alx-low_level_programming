#include "lists.h"

/**
 * print_listint - prints the elements of the linked list
 * @h: linked list of type listint_t that needs to be printed
 *
 * Return: nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t d = 0;

	while (h)
	{
		printf("%d\n", h->n);
		d++;
		h = h->next;
	}

	return (d);
}
