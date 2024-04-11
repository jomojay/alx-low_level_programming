#include "search_algos.h"

/**
 * advanced_binary - searches for a value in an array of
 * integers using the Binary search algorithm
 * @array: array to search
 * @size: len of array
 * @value: value we look for
 * Return: index of value or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (re_binary(array, value, 0, size - 1));
}

/**
 * print_arr - prints all elements of a given array
 * @array: array to be printed
 * @low: starting index
 * @high: end index
 * Return: void
 */
void print_arr(int *array, int low, int high)
{
	printf("Searching in array: ");
	while (array && low <= high)
	{
		printf("%d", array[low]);
		if (low != high)
			printf(", ");
		low++;
	}
	printf("\n");
}

/**
 * re_binary - a helper to do binary search recursively
 * @array: the array
 * @value: that we search for
 * @low: zero end
 * @high: high end
 * Return: index of value or -1
 */
int re_binary(int *array, int value, size_t low, size_t high)
{
	size_t mid;

	print_arr(array, low, high);

	if (high == low && array[low] != value)
		return (-1);

	mid = ((high - low) / 2) + low;

	if (array[mid] == value)
	{
		if (array[mid - 1] == value)
			return (re_binary(array, value, low, mid));
		else
			return (mid);
	}
	if (array[mid] < value)
		return (re_binary(array, value, mid + 1, high));
	if (array[mid] > value)
		return (re_binary(array, value, low, mid));
	return (-1);
}
