#include "lists.h"

/**
 * *add_dnodeint_end - add a node to the end of a list
 * @head: pointer to the head node
 * @n: integer to be stored
 * Return: Returns pointer to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *tmp = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		*head = new;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		new->n = n;
		new->prev = tmp;
		new->next = NULL;
		tmp->next = new;
	}
	return (new);
}
