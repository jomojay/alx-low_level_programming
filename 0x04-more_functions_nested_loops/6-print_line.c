#include "main.h"

/**
 * print_line - prints - n number of times to make a straight line
 * @n: number of times
 *
 * Return: Always 0 (success)
 */
void print_line(int n)
{
	char c = '_';

	if (n > 0)
	{
		while (n)
		{
			_putchar(c);
			n--;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
