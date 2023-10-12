#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at a given index
 * @head: pointer to the head node
 * @index: position of the node to be fetched
 * Return: Returns pointer to the node or NULL(fails)
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp = NULL;

	if (head == NULL)
		return (NULL);
	tmp = head;
	while (tmp)
	{
		if (i == index)
			return (tmp);
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
