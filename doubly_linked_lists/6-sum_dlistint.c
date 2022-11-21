#include "lists.h"

/**
 * sum_dlistint - sum all the int in a list
 * @head: head of the list
 * Return: sum of all the values of n
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head->next != NULL)
		{
			sum = sum + head->n;
			head = head->next;
		}
		sum = sum + head->n;
	}

	return (sum);
}
