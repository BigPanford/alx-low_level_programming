#include "lists.h"

/**
 * add_nodeint - at the beginning of the linked list adds a new node
 * @head: pointer to the first node in the list
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL when it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
