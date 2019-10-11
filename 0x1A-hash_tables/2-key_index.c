#include "hash_tables.h"

/**
 *key_index-Function that gives us the index of a key
 *@key: Key to look for it
 *@size:Size of the array fo the hash table
 *
 *Return: Hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!size)
		return (0);
	return (hash_djb2(key) % size);

}
