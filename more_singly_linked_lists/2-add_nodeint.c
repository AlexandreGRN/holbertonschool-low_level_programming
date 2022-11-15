#include "lists.h"

/**
 * add_nodeint - add a new node at the begenning
 * @head: node start
 * @n: int to add
 * Return: adress of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/*creating new node*/
	listint_t *newHead;

	newHead = malloc(sizeof(listint_t));
	if (newHead == NULL)
		return (NULL);

	newHead->n = n;
	newHead->next = *head; /*linking new node to the head one*/

	*head = newHead;
	return (newHead);
}
