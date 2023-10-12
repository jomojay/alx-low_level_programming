#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a list
 * @h: pointer to the head node
 * Return: Returns the total number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = NULL;
	size_t i = 0;

	if (h == NULL)
		return (0);

	tmp = h;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
