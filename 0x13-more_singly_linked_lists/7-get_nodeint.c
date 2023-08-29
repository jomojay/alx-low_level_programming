#include "lists.h"

/**
 * get_nodeint_at_index - gets a node at a given index
 * @head: pointer to the head node
 * @index: position of the inteded noded
 * Return: Returns the nth node of a list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = NULL;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	tmp = head;
	while (i < index)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
		return (NULL);
	return (tmp);
}
