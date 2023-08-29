#include "lists.h"

/**
 * sum_listint - sums all the data of each node of a list
 * @head: pointer to the head node of a list
 * Return: sum of all data(n) of each node of a linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = NULL;

	if (head == NULL)
		return (0);
	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
