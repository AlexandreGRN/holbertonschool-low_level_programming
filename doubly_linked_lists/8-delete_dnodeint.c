#include "lists.h"

/**
 * _print_dlistint_backward - print a list but backward
 * @h: head of the list
 * Return: number of elems
 */
size_t _print_dlistint_backward(const dlistint_t *h)
{
	int count = 0;

	while (h->next) /*go end*/
		h = h->next;
	while (h->prev) /*print backward + count for lenght*/
	{
		count++;
		printf("%d", h->n); /*print current*/
		h = h->prev; /*go previous node*/
	}
	printf("%d", h->n);
	return (count);
}
/**
 * delete_dnodeint_at_index - delete a node at a given pos
 * @head: head of the list
 * @index: index where to put the node
 * Return: 1 or -1 for error
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{dlistint_t *copyHead, *temp, *toFree;
	unsigned int count = 0;

	copyHead = (*head); /*stock head*/
	if (copyHead == NULL)
		return (-1);
	if (index == 0) /*delete beginning*/
	{
		if ((*head)->next != NULL)
		{
			(*head) = (*head)->next;
			(*head)->prev = NULL;
			free(copyHead);
			return (1);
		}
		else
		{
			free(*head);
			*head = NULL;
			return (1);
		}
	}
	while (head && count < index)
	{
		temp = copyHead;
		if (copyHead->next != NULL)
		{
			count++;
			copyHead = copyHead->next;
		}
		else
			return (-1);
	}
	temp->next = copyHead->next;
	toFree = copyHead;
	if (copyHead->next)
	copyHead = copyHead->next;
	if (copyHead->prev != NULL)
		copyHead->prev = temp;
	free(toFree);
	return (1);
}
