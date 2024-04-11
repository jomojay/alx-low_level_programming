#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using Binary Search Algorithm
 * @array: pointer to the array
 * @size: size of the array
 * @value: value/element to be searched for
 * Return: index of the element or -1 if element is not found
 */
int binary_search(int *array, size_t size, int value)
{
	int high = (int)size - 1, low = 0, mid;

	while (array && low <= high)
	{
		print_arr(array, low, high);
		mid = (high + low) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
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
