#include "search_algos.h"
#include <math.h>

/**
 * jump_search - jump search algorithm for arrays.
 * @array: A pointer to inputed array.
 * @size: The size of array.
 * @value: The value to search for.
 * Return: The index of the value into the array.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start = 0, limit = 0, step = (size_t)sqrt(size);

	if (array == NULL || size == 0)
		return (-1);

	while (limit < size && array[limit] < value)
	{
		start = limit;
		limit += step;
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", start, limit);

	while (start <= limit && start < size)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return (start);
		start++;
	}

	return (-1);
}
