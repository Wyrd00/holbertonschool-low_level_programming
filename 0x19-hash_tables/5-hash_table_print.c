#include "hash_tables.h"

/**
 * hash_table_print - print the hash table
 * @ht: table
 * Return - printed table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *vagabond;
	unsigned int hiya;

	if (!ht)
		return;

	i = 0;
	hiya = 0;

	printf("{");
	while (i < ht->size)
	{
		vagabond = ht->array[i];
		while (vagabond)
		{
			if (hiya == 1)
				printf(", ");
			printf("'%s': '%s'", vagabond->key, vagabond->value);
			hiya = 1;
			vagabond = vagabond->next;
		}
		i++;
	}
	printf("}\n");
}
