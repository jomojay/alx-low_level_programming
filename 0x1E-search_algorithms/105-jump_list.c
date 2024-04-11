#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of intgers
 * using Jump Search Algorithm
 * @list: pointer to head of list to be searched
 * @size: number of nodes in the list
 * @value: value to search for
 * Return: pointer to 1st node with the "value" or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *tmp, *tmp_1;
	size_t b_jump = (size_t)sqrt(size), i;
	size_t start = 0, limit = b_jump;

	if (!list)
		return (NULL);

	tmp = list;
	while (start < size && tmp->next)
	{
		while (start < limit && tmp->next)
		{
			tmp = tmp->next;
			start++;
		}
		printf("value checked at index [%lu] = [%d]\n", tmp->index, tmp->n);
		if (tmp->n == value)
			return (tmp);
		else if (tmp->n < value)
		{
			start = limit;
			limit += b_jump;
		}
		else
		{
			start = start - b_jump;
			tmp = list;
			i = 0;
			while (i < start && tmp->next)
			{
				tmp = tmp->next;
				i++;
			}
			tmp_1 = list;
			i = 0;
			while (i < limit && tmp_1->next)
			{
				tmp_1 = tmp_1->next;
				i++;
			}
			printf("value found between index [%lu] and [%lu]\n", tmp->index, tmp_1->index);
			while (start < limit && tmp->next)
			{
				printf("value checked at index [%lu] = [%d]\n", tmp->index, tmp->n);
				if (tmp->n == value)
					return (tmp);
				tmp = tmp->next;
				start++;
			}
		}
	}
	return (NULL);
}
