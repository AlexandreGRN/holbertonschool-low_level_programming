#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at a given pos
 * @h: head of the list
 * @idx: index where to put the node
 * @n: int to add in the node
 * Return: adress of the new node or NULL if fail
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int counter = 0;

	dlistint_t *storeHead = *h;
	dlistint_t **storeSuppr;
	dlistint_t **ptrNext;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	while (counter + 1 < idx)
	{
		if (*h)
		{
			ptrNext = &((*h)->next)
			counter++;
			*h = (*h)->next; /*go to the index of the node to suppr*/
		}
		else
		{
			*h = storeHead;
			return (NULL);
		}
	}
	storeSuppr = h;
	free(ptrNext);
	if (h->next)
	{
		*h = (*h)->next;

	

	return (newNode);
}
