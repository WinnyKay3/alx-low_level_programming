#include "hash_tables.h"

/**
 * hash_table_get - retrieves value associated with a key
 * @ht: hash table to look into
 * @key: the key to get
 *
 * Return: value associated with element or NULL if key not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL)
		return (NULL);

	index = key_index((unsigned char *) key, ht->size);
	if (index >= ht->size)
		return (NULL);
	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
