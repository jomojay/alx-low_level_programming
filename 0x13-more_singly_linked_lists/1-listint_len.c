#include "lists.h"

/**
 * listint_len - prints total number of elements in a list
 * @h: pointer to the first node of the linked list
 * Return: Returns total nimber of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *tmp;
	size_t count = 0;

	if (h == NULL)
		return (0);
	tmp = h;
	while (tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
