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
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *tmp;
	unsigned int i;

	if (!head || !new)
		return (NULL);

	tmp = *head;
	new->n = n;
	new->next = NULL;
	for (i = 0; i < idx && tmp != NULL; i++)
	{
		if (i == idx - 1)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		else
			tmp = tmp->next;
	}
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	return (NULL);
}
