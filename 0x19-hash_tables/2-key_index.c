#include "hash_tables.h"

/**
 * key_index - give index of key
 * @key: key
 * @size: size of the array of hash table
 * Return: index where key/value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int hash_num;

	hash_num = hash_djb2(key);
	return (hash_num % size);
}
