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
	dlistint_t *newNode;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == 0)
		return (NULL);
	newNode->n = n;

	while (counter + 1 < idx)
	{
		if (*h)
		{
			counter++;
			*h = (*h)->next; /*go to the index*/
		}
		else
		{
			*h = storeHead;
			return (NULL);
		}
	}
	/*links*/
	newNode->prev = (*h);
	newNode->next = (*h)->next;
	(*h)->next = newNode;
	if (newNode->next) /*go to h + 1 if exist*/
		(*h) = newNode->next;
	(*h)->prev = newNode;

	*h = storeHead; /*head back*/

	return (newNode);
}
