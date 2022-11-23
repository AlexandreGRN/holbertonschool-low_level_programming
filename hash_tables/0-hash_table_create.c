#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the hase table
 * Return: pointer to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newHash;

	/* create new hash table struc*/
	newHash = malloc(sizeof(hash_table_t));
	newHash->size = size;
	newHash->array = malloc(sizeof(hash_node_t));

	return (newHash);
}
