#include "lists.h"

/**
 * list_len - return nodes count
 * @h: nodes
 * Return: counter
 */

size_t list_len(const list_t *h)
{
	int counter = 0;

	if (h)
	{
		while (h != 0)
		{
			if (h->str)
			{
				counter++;
				h = h->next;
			}
			else
			{
				h = h->next;
			}
		}
	}
	return (counter);
}
