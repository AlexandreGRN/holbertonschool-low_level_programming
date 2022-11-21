#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of a list
 * @head: head of the list
 * @n: int to add
 * Return: adress of new elem
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode; /*creating node*/

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (0);

	(*head)->prev = newNode; /*link from old Head to new Head*/
	newNode->n = n;
	newNode->next = *head; /*link from new Head to old Head*/
	newNode->prev = NULL;

	*head = newNode; /*newNode = new head*/

	return (*head);
}
