#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head of the list
 * @index: emplacement of the node to delet
 *
 * Return: pointr to head of list
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *next_node;

	if (!head || !*head)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		current = current->next;
		if (!current)
			return (-1);
	}
	next_node = current->next;
	current->next = next_node->next;
	free(next_node);
	return (1);
}
