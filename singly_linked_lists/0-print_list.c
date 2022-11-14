#include "lists.h"

/**
 * print_list - print all the list
 * @h: said list
 * Return: number of node
 */

size_t print_list(const list_t *h)
{
	int len = 0;

	while (h != 0)
	{
		len++;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;

	}
	return (len);
}
