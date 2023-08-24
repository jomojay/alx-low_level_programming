#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements in a linked list
 * @h: pointer to the head node
 *
 * Return: total number of the linked list elements
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp;
	size_t count = 0;

	tmp = h;
	while (tmp != NULL)
	{
		printf("[%u] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
		count++;
	}
	return (count);
}
