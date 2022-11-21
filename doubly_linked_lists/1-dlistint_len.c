#include "lists.h"

/**
 * print_dlistint - print a doubly linked list
 * @h: head of the list
 * Return: lenght of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int len = 0;

	if (h == NULL)
		return (0);
	while (h != NULL) /*print all the list + lenght of the list*/
	{
		printf("%d", h->n);
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
