#include "lists.h"

/*
 * add_node - add a node in the beginning of the list
 * @head: pointer of head
 * @str: string
 * Return: the node
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *newHead;

	newHead = malloc(sizeof(list_t));
	if (newHead == 0)
	{
		free(newHead);
		return (0);
	}

	newHead->str = strdup(str);
	newHead->len = strlen(str);
	newHead->next = *head;
	*head = newHead;

	return (newHead);
}
