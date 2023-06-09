#include "hash_tables.h"

/**
 * hash_table_set - add or update a character in hash table
 * @ht: a pointer to hash table
 * @key: the key to add - cannot be empty string
 * @value: value associated with key
 *
 * Return: upon failure - 0
 * otherwise - 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *new_value;
	unsigned long int index, k;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	new_value = strdup(value);
	if (new_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	for (k = index; ht->array[k]; k++)
	{
		if (strcmp(ht->array[k]->key, key) == 0)
		{
			free(ht->array[k]->value);
			ht->array[k]->value = new_value;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(new_value);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = new_value;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
