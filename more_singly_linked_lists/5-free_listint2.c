#include "lists.h"

/**
 * free_listint2 - function that free a linked list
 * @head: head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *copyNode; /*var to copy the link to the next node */

	if (head)
	{
		while ((*head))
		{
			copyNode = (*head)->next;
			free(*head);
			(*head) = NULL;
			(*head) = copyNode;
		}
	}
}
