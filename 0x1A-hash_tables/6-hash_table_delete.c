#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *location, *free_n;
	unsigned long int i;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		location = ht->array[i];
		while (location)
		{
			free_n = location;
			location = location->next;
			free(free_n->key);
			free(free_n->value);
			free(free_n);
		}
	}
	free(ht->array);
	free(ht);
}
