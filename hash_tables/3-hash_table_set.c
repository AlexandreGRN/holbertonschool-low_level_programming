#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: the key
 * @value: value associated with the key
 * Return: 1 (success) or 0 (fail)
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *newElem; /* new element to create (if needed) */
	hash_node_t *tempHead; /* used to search an available place in the hashtable and head of the linked list */

	/* get the index from prev function*/
	index = key_index((const unsigned char *)key, 1024);

	/* go to index in the hashtable*/
	tempHead = ht->array[index];

	/* search if the index isn't already taken */
	while (tempHead)
	{
		/*multiples key can have the same idx, we need to search the node stockin the good key in the said idx */
		if (strcmp(tempHead->key, key) == 0)
		{
			/* replacing the old value in the good spot (corresponding key) */
			free(tempHead->value);
			strcpy(tempHead->value, value);
			return (1);
		}
		tempHead = tempHead->next;
	}

	/* if no corresponding key found : add a new elements at the begenning of the list*/
	/* create an element */
	newElem = malloc(sizeof(hash_node_t));
	newElem->key = strdup(key); /* copy the key string into the new elem node */
	newElem->value = strdup(value); /* same but for the value string */
	newElem->next = NULL;

	/*add it at the begenning of the singly linked list*/
	if (ht->array[index])
		newElem->next = ht->array[index]; /* if index is already taken by a list, link newElem with said list */
	ht->array[index] = newElem;

	return (1);
}
