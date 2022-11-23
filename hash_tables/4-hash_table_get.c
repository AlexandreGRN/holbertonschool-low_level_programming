#include "hash_tables.h"

/**
 * hash_table_get - get a value associated with a key
 * @ht: hash table
 * @key: key
 * Return: string associated to said key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tempHead;

	/* get index */
	index = key_index((const unsigned char *)key, ht->size);

	/* go to index */
	tempHead = ht->array[index];

	while (tempHead)
	{
		/* if find a matching key */
		if (strcmp(tempHead->key, key) == 0)
		{
			return (tempHead->value);
		}
		tempHead = tempHead->next;
	}
	return (NULL);
}
