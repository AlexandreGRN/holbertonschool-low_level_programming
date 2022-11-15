#include "lists.h"

/**
 * sum_listint - function that sums all the elements in the linked list
 * @head: head of the list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *copyHead;

	copyHead = head;
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	head = copyHead;
	return (sum);
}
