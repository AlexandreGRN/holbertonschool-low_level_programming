#include "hash_tables.h"

/**
 * hash_table_print - print all the hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int count, test_separator = 0;
	hash_node_t *currentHead;

	printf("{");
	for (count = 0; ht != NULL && count < ht->size; count++)
	{
		test_separator = 0;
		currentHead = ht->array[count];
		while (currentHead)
		{
			if (currentHead && currentHead->value)
			{
				printf("'%s': '%s'", currentHead->key, currentHead->value);
				currentHead = currentHead->next;
				test_separator = 1;
			}
		}
		if (count + 1 != ht->size && test_separator == 1)
			printf(", ");
	}
	printf("}\n");
}
