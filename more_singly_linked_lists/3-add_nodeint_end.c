#include "lists.h"

/**
 * add_nodeint_end - add an int node at the end
 * @head: head of the node
 * @n: int to add
 * Return: new adress
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *copy = (*head);

	/*Creating new Node*/
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (0);
	}

	newNode->next = 0;
	newNode->n = n;

	if ((*head) == NULL)
	{
		(*head) = newNode;
		return ((*head));
	}
	/*going thru the whole list*/
	while ((*head)->next != 0)
	{
		(*head) = (*head)->next;
	}
	(*head)->next = newNode;

	(*head) = copy;

	return (*head);
}
