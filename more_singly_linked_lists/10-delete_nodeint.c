#include "lists.h"

/**
 * delete_nodeint_at_index - delete a certain node
 * @head: head of the list
 * @index: index of the node suppressed
 * Return: 1 or -1;
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *copyHead; /*for index > 0*/
	listint_t **copyNext;
	unsigned int count = 1;

	if (head == NULL || *head == NULL)
		return (-1);
	copyHead = *head; /*store head in copyHead*/
	if (index > 0)
	{
		while (count < index) /*travel every node before index - 1*/
		{
			if ((*head) == NULL) /*if more index > the number of values*/
			{
				(*head) = copyHead;
				return (-1);
			}
			count++;
			(*head) = (*head)->next;
		}
		if ((*head)) /* if we are on the indexth - 1 value*/
		{
			copyNext = &((*head)->next); /*link the adress of (*head).next*/
			(*head) = (*head)->next;
			*copyNext = ((*head)->next); /*change the value of (*head)->next) */
			free((*head));
			*head = copyHead;
			return (1);
		}
		return (-1);
	}
	else /*if we want to suppress the first value*/
	{
		copyHead = (*head)->next;/*store (*head)->next to make next as new head*/
		free(*head);
		(*head) = copyHead;
		return (1);
	}
}
