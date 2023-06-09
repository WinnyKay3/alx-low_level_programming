#include "hash_tables.h"

/**
 * key_index - gets the index at which key or value should
 * be stored in array of the hash table
 * @key: key to get index
 * @size: the size of the array of the hash table
 *
 * Description:  uses the djb2 algorithm
 *
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
