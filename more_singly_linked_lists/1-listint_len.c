#include "lists.h"

/**
 * listint_len - return len of a list
 * @h: node
 * Return: lenght
 */

size_t listint_len(const listint_t *h)
{
	int lenght = 0;

	while (h)
	{
		lenght++;
		h = h->next;
	}
	return (lenght);
}
