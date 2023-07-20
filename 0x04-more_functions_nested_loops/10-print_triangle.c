#include "main.h"

/**
 * print_triangle -  a function that prints a triangle, followed by a new line.
 * @size: An input integer
 * Return: Always 0
 */
void print_triangle(int size)
{
	int i = 1, j, n = size;

	if (size > 0)
	{
		while (i <= size)
		{
			j = 1;

			while (j <= size)
			{
				if (j >= n)
					_putchar('#');
				else
					_putchar(' ');
				j++;
			}
			n--;
			i++;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
