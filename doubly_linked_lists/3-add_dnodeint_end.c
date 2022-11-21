#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end
 * @head: head of the list
 * @n: node to add
 * Return: adress of the new elem
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode; /*creating new node*/
	dlistint_t *copyHead = *head; /*copy the head of the list*/

	if (head != NULL && *head != NULL) /*if list not NULL, go at the end*/
	{
		while ((*head)->next != NULL)
		{
			(*head) = (*head)->next;
		}
	}

	newNode = malloc(sizeof(dlistint_t)); /*create new Node end*/
	if (newNode == NULL)
		return (0);
	newNode->n = n;
	newNode->next = NULL;
	if (*head != NULL && head != NULL)
	{
		(*head)->next = newNode; /*link from penultimate to last*/
		newNode->prev = *head; /*link from last to penultimate*/
		*head = copyHead;
	}
	else
	{
		newNode->prev = NULL;
		*head = newNode;
	}
	return (newNode);
}
