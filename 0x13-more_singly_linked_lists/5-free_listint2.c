#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free a listint_t list.
 * @head: pointer to the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (!head)
		return;
	while (*head)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
