#include "lists.h"

/**
 * print_listint - function that prints all the nodes in a list
 * @h: nodes
 * Return: number of node
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	 while (h)
	 {
		printf("%d\n", h->n);
		count ++;
		h = h->next; 
	 }
	 return (count);
}
