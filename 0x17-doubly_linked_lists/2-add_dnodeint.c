#include "lists.h"

/**
 * add_dnodeint - add a node to the begining of a list
 * @head: pointer to the head node
 * @n: integer to be stored
 * Return: Returns pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

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
		new->n = n;
		new->prev = NULL;
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}
	return (new);
}
