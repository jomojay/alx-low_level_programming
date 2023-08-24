#include "lists.h"
#include <stdio.h>

/**
 * list_len - prints the total elements in a list_t list
 * @h: pointer to the head node
 *
 * Return: total number of the linked list elements
 */
size_t list_len(const list_t *h)
{
	const list_t *tmp;
	size_t count = 0;

	tmp = h;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
