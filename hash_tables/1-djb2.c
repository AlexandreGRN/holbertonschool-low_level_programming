#include "hash_table/h"

/**
 * hash_djb2 - program that associate a string to a number
 * @str: string to link with a number
 * Return: hash number
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
