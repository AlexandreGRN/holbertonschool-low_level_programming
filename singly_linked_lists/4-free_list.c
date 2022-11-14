#include "lists.h"
/**
 * free_list - free full list
 * @head: head of the list
 */
void free_list(list_t *head)
{
	list_t *temp;

	/* free every elem till head == NULL */
	while (head != NULL)
	{
		temp = head->next; /*take next value*/
		free(head->str);
		free(head);
		head = temp; /* move to the next value */
	}
}
