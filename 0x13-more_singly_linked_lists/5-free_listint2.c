#include "lists.h"

/**
 * free_listint2 - frees a linked list and sets head to NULL
 * @head: pointer to head element of list
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = *head;
		(*head) = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
