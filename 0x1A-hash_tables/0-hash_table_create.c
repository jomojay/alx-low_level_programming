#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of said table
 * Return: a ptr to new table or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;

	if (!size)
		return (NULL);
	h_table = calloc(1, sizeof(hash_table_t));
	if (!h_table)
		return (NULL);
	h_table->size = size;
	h_table->array = calloc(size, sizeof(hash_node_t *));
	if (!h_table->array)
	{
		free(h_table);
		return (NULL);
	}
	return (h_table);
}
