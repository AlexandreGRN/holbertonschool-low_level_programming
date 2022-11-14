#include "lists.h"

/**
 * add_node_end - add a node at the end
 * @head: head of the list
 * @str: str to add
 * Return: adress of new elem
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newHead;
	list_t *copyHead;
	list_t **copycopyHead = &copyHead;

	/* creating newHead struct as a new node*/
	newHead = malloc(sizeof(list_t));
	if (newHead == NULL)
	{
		free(newHead);
		return (0);
	}
	newHead->len = strlen(str);
	newHead->str = strdup(str);
	newHead->next = NULL;
	if (newHead->str == NULL)
	{
		free(newHead->str);
		free(newHead);
		return (0);
	}
	/*test if first value of head*/
	if (*head == NULL)
	{
		(*head) = newHead;
		return (newHead);
	}
	(*copycopyHead) = (*head);
	/* if not the last node, go in the next one*/
	while ((*head)->next != 0)
	{
		(*head) = (*head)->next;
	}

	(*head)->next = newHead; /*link penultimate node to the new last node*/
	(*head) = (*copycopyHead); /*change head value to previous*/
	return (newHead);
}
