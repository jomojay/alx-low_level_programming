#include "lists.h"

/**
 * add_node - add a new node at the begining of a list_t list
 * @head: pointer to the first node
 * @str: pointer to the nodes str value
 *
 * Return: pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;
	size_t len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (str[len])
		len++;
	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
