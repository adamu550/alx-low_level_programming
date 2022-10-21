#include "lists.h"
#include <string.h>
/**
 * add_node - add new element
 * @head: the head of the list
 * @str: str element
 * Return: pointer to new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i = 0;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	if (str == NULL)
	{
		new->str = NULL;
		new->len = 0;
		new->next = *head;
	}

	else
	{
		while (str[i] != '\0')
			i++;
		new->str = strdup(str);
		new->len = i;
		new->next = *head;
	}
	*head = new;
	return (*head);
}
