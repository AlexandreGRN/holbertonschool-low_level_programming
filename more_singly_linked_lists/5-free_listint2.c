#include "lists.h"

/**
 * free_listint2 - function that free a linked list
 * @head: head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *copyNode; /*var to copy the link to the next node */

	while ((*head))
	{
		if ((*head)->next)
			copyNode = (*head)->next;
		free(*head);
		(*head) = NULL;
		if ((*head))
			(*head) = copyNode;
	}
}
