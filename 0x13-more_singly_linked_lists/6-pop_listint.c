#include "lists.h"

/**
 * pop_listint - pop the first node in a linked list
 * @head: pointer to the first node
 * Return: the head nodes data or 0 (empty list)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = NULL;
	int i = 0;

	if (*head == NULL)
		return (0);
	i = (*head)->n;
	tmp = *head;
	(*head) = (*head)->next;
	free(tmp);
	return (i);
}
