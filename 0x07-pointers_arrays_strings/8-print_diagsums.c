#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to a 2D matrix array
 * @size: size of array
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum_f = 0, sum_b = 0;

	for (i = 0; i < size; i++)
		sum_f += a[i * size + i];

	for (j = (size - 1); j >= 0; j--)
		sum_b += a[j * size + (size - j - 1)];

	printf("%d, %d\n", sum_f, sum_b);
}
