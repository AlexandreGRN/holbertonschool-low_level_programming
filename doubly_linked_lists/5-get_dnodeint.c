#include "lists.h"

/**
 * get_dnodeint_at_index - get the node value at a certain index
 * @head: head of the list
 * @index: index of the node we want to get the value of
 * Return: node at a certain index in the list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *ptrRet; /*ptr to the node to return*/

	while (count != index)
	{
		if (head)
		{
			count++;
			head = head->next;
		}
		else
			return (NULL);
	}
	ptrRet = head;
	while (head->prev != NULL)
		head = head->prev;

	return (ptrRet);

}
