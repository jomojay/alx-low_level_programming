#include "lists.h"

/**
 * insert_nodeint_at_index - insert a newnode at a given position
 * @head: pointer to head node
 * @idx: given position
 * @n: data of the new node
 * Return: Address of newnode or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *tmp = NULL, *new = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		tmp = *head;
		while (i < (idx - 1))
		{
			tmp = tmp->next;
			i++;
		}
		if (tmp->next == NULL)
			return (NULL);
		new->next = tmp->next;
		tmp->next = new;
	}
	return (new);
}
