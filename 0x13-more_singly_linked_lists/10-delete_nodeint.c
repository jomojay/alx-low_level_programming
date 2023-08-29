#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at a given index
 * @head: head node pointer
 * @index: index of the given position
 * Return: 1 (successful) ot 1 (failed)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = NULL, *del = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		if ((*head)->next == NULL)
			return (-1);
		del = *head;
		(*head) = (*head)->next;
	}
	else
	{
		while (i < (index - 1))
		{
			tmp = tmp->next;
			i++;
		}
		del = tmp->next;
		tmp->next = del->next;
	}
	free(del);
	return (1);
}
