#include "hash_tables.h"

/**
 * create_node - create new node
 * @key: key
 * @value: value
 * Return: new node or null
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);

	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (NULL);
	}

	new->value = strdup(value);
	if (!new->value)
	{
		free(new->key);
		free(new);
		return (NULL);
	}
	return (new);
}


/**
 * hash_table_set - set new hash node or update if key already exists
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 if it went successfully, 0 if not
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *vagabond;
	hash_node_t *new;

	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0);
	}

	index = key_index((unsigned char *)key, ht->size);
	vagabond = ht->array[index];

	/*check to see if key already exist*/
	while (vagabond != NULL)
	{
		if (strcmp(vagabond->key, key) == 0)
		{
			free(vagabond->value);
			vagabond->value = strdup(value);
			return (1);
		}
		vagabond = vagabond->next;
	}
	/*key doesn't exist, so create new node*/
	new = create_node(key, value);
	if (new == NULL)
		return (0);

	/*move back to head of linked list and add node*/
	vagabond = ht->array[index];
	new->next = vagabond;
	ht->array[index] = new;
	return (1);
}
