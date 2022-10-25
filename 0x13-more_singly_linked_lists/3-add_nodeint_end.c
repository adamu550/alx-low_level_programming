#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add a new node at the end of a listint_t list.
 * @head: pointer to the beginning of the list
 * @n: value to add to the list
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new;
	return (new);
}
