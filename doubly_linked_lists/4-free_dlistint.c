#include "main.h"

/**
 * free_dlistint - free dlistint
 * @head: head of the list to free
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *cpyNext;/*store the adress of the nxt value before free the node*/

	while (head != NULL)
	{
		cpyNext = head->next;
		free(head);
		head = cpyNext;
	}
}
