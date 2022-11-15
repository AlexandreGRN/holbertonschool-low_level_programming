#include "lists.h"

/**
 * pop_listint - pop the first node of a list
 * @head: list
 * Return: info of poped node
 */

int pop_listint(listint_t **head)
{
	listint_t *copyFirstNode;
	int n = 0;

	if ((*head) == NULL)
		return (0);
	n = (*head)->n;

	copyFirstNode = (*head)->next;
	free(*head);
	(*head) = copyFirstNode;

	return (n);
}
