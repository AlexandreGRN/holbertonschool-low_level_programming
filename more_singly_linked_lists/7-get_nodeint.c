#include "lists.h"

/**
 * get_nodeint_at_index - get a certain node at the nth time
 * @head: head of the list
 * @index: node to return
 * Return: value of the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *copyHead; /*copy the head node*/
	listint_t *returnNode; /*value to return the value of the nth node*/

	copyHead = head;
	while (index > count && head)
	{
		count++;
		head = head->next;
	}
	if (head == NULL)
	{
		head = copyHead;
		return (NULL);
	}
	returnNode = head;
	head = copyHead;
	return (returnNode);
}
