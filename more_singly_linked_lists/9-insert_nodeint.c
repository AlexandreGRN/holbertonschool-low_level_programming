#include "lists.h"
/**
 * insert_nodeint_at_index -  insert a node at a certain place
 * @head: head of the list
 * @idx: idx where the node will be insert
 * @n: int in node
 * Return: the adress of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *newNode;
	unsigned int count = 0; /*counter*/

	newNode = malloc(sizeof(listint_t));
	if (head == NULL || newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	node = (*head);

	while (node)
	{
		if (count == idx - 1)
		{
			newNode->next = node->next;
			node->next = newNode;
			return (newNode);
		}
		count++;
		node = node->next;
	}
	free(newNode);
	return (NULL);
}
