#include "main.h"

/**
 * print_diagonal - prints / n numbers of time to form a diagonal
 * @n: given number
 *
 * Return: Always 0 (success)
 */
void print_diagonal(int n)
{
	int i = 1, j;
	char c = '\\';

	if (n > 0)
	{
		while (i <= n)
		{
			j = 1;

			while (j <= n)
			{
				if (i == j)
					_putchar(c);
				else
					_putchar(' ');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
