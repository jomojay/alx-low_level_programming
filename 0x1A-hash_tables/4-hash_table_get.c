#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with key
 * @ht: hash table to search
 * @key: the key
 * Return: key's value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *location;
	unsigned long int index;

	if (!(ht && key && *key))
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	location = ht->array[index];
	while (location)
	{
		if (strcmp(location->key, key) == 0)
			return (location->value);
		location = location->next;
	}
	return (NULL);
}
