#include "hash_tables.h"

/**
 * hash_table_print - print all the hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int count;
	int test = 0; /* test for print separator */
	hash_node_t *currentHead;

	if (ht)
	{
		printf("{");
		for (count = 0; ht != NULL && count < ht->size; count++)
		{
			currentHead = ht->array[count];
			/* print value*/
			while (currentHead)
			{
				if (test == 1)
					printf(", ");
				if (currentHead && currentHead->value)
				{
					printf("'%s': '%s'", currentHead->key, currentHead->value);
					currentHead = currentHead->next;
					test = 1;
				}
			}
		}
		printf("}\n");
	}
}
