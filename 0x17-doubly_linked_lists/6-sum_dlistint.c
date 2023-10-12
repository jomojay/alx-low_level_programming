#include "lists.h"

/**
 * sum_dlistint - sums up all the element in a list
 * @head: pointer to the head node
 * Return: total sum or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp = NULL;

	if (head == NULL)
		return (0);
	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
