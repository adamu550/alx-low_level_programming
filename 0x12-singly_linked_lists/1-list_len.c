#include "lists.h"
/**
 * list_len - number of nodes
 * @h: pointer to list
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	list_t *p = (list_t *)h;
	int i = 0;

	while (p != NULL)
	{
		i++;
		p = p->next;
	}
	return (i);
}
