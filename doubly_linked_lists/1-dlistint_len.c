#include "lists.h"

/**
 * dlistint_len - print the len of a doubly linked list
 * @h: head of the list
 * Return: lenght of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	if (h == NULL)
		return (0);
	while (h != NULL) /*get lenght of the list*/
	{
		len++;
		if (h->next != NULL)
			h = h->next;
		else
			break;
	}
	while (h->prev != NULL) /*go to head*/
	{
		h = h->prev;
	}

	return (len);
}
