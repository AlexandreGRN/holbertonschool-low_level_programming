#include "lists.h"
/**
 * insert_nodeint_at_index -  insert a node at a certain place
 * @head: first node of the list
 * @idx: idx where the node will be added
 * @n: int to add in node
 * Return: the adress of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *copyHead = NULL; /*store (*head)*/
	listint_t *newNode = NULL; /*new node created*/
	listint_t **copyPreviousNode = NULL;
	unsigned int counter = 0;

	if (idx == 0)
	{
		newNode->next = (*head);
		(*head) = newNode;
	}
	/*creating node to insert*/
	newNode = malloc(sizeof(listint_t));
	if (newNode == 0)
		return (0);
	newNode->n = n;
	copyHead = (*head);/*store (*head) */
	copyPreviousNode = &((*head)->next);

	while (counter <= idx)
	{
		if (counter == idx)
			*copyPreviousNode = newNode;
		else
			copyPreviousNode = &((*head)->next);
		(*head) = (*head)->next; /*go to next node*/
		counter++;
	}

	/*when we arrive to idxth node*/

	newNode->next = (*head);
	(*head) = copyHead;
	return (newNode);
}
