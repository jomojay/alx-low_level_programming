#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using Linear Search Algorithm
 * @array: pointer to the array of integers
 * @size: size of the array
 * @value: value to search for
 * Return: The 1st index that matches 'value'
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	while (array && i < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, (int)array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
