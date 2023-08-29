#include "lists.h"

/**
 * add_nodeint - add a new node at the begining of a list
 * @head: pointer to the first node of the list
 * @n: int member of a node
 * Return: address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = NULL;

	newnode = *head;
	*head = malloc(sizeof(listint_t));
	if (*head == NULL)
		return (NULL);
	(*head)->n = n;
	(*head)->next = newnode;
	return (*head);
}
