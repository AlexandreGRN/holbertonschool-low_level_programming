#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the hase table
 * Return: pointer to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newHash;

	newHash = malloc(sizeof(hash_table_t) * size);

	return (newHash);
}
