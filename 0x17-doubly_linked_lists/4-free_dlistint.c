#include "lists.h"

/**
 * free_dlistint - frees all the nodes in a list
 * @head: pointer to the head node
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	tmp = head;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
