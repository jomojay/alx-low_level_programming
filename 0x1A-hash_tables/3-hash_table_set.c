#include "hash_tables.h"

/**
 * hash_table_set - adds an element to table
 * @ht: hash table
 * @key: element key
 * @value: element value
 * Return: 1 (success), or 0 (fail)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *head;
	unsigned long int index;

	if (!(ht && key && *key && value))
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];
	new = NULL;

	while (head)
	{
		if (!strcmp(key, head->key))
		{	/* value must be duped */
			char *newval = strdup(value);
			/* check for bad value */
			if (!newval)
				return (0);
			free(head->value);
			head->value = newval;
			return (1);
		}
		head = head->next;
	}
	new = new_node(key, value);
	if (!new)
		return (0);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
/**
 * new_node - adds element to hash table/ chains
 * @key: key of node
 * @value: value of node
 * Return: pointer to the new node
 */
hash_node_t *new_node(const char *key, const char *value)
{
	hash_node_t *new;

	new = calloc(1, sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (!new->value)
	{
		free(new->key);
		free(new);
		return (0);
	}
	return (new);
}
