#include "hash_tables.h"

/**
 * hash_table_delete - delete entire hash table
 * @ht: pointer to head of table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *vagabond;
	hash_node_t *head;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		while (head)
		{
			vagabond = head->next;
			free(head->key);
			free(head->value);
			free(head);
			head = vagabond;
		}
	}
	free(ht->array);
	free(ht);
}
