#include "hash_tables.h"

/**
 * hash_table_get - retrieve the value when key is inputed
 * @ht: pointer to hash table
 * @key: key
 * Return: value associated with key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *vagabond;

	index = key_index((unsigned char *)key, ht->size);

	vagabond = ht->array[index];
	while (vagabond)
	{
		if (strcmp((vagabond->key), key) == 0)
		{
			return (vagabond->value);
		}
		vagabond = vagabond->next;
	}
	return (NULL);
}
