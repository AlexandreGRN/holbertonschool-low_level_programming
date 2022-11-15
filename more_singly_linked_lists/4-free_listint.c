#include "lists.h"

/**
 * free_listint - function that free a linked list
 * @head: head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *copyNode; /*var to copy the link to the next node */

	while (head)
	{
		copyNode = head->next;
		free(head);
		head = copyNode;
	}
}
