#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list
 * @h: pointer to the head node
 * Return: Returns the total number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = NULL;
	size_t i = 0;

	if (h == NULL)
		return (0);

	tmp = h;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		i++;
	}
	return (i);
}
