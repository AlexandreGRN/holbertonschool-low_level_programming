#include "hash_tables.h"

/**
 * hash_table_delete - print all the hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int count;
	hash_node_t *currentHead;
	hash_node_t *nextNode;

	for (count = 0; count < (ht->size) ; count++)
	{
		currentHead = ht->array[count];
		while (currentHead)
		{
			nextNode = currentHead->next;
			free(currentHead->value);
			free(currentHead->key);
			free(currentHead);
			currentHead = nextNode;
		}
	}
	free(currentHead);
	free(nextNode);
	free(ht->array);
	free(ht);
}
