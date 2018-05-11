#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: unsigned long int of the array size
 * Return: pointer to newly created table else NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned int i;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	if (!table->array)
	{
		free(table);
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		table->array[i] = NULL;
		i++;
	}
	return (table);
}
