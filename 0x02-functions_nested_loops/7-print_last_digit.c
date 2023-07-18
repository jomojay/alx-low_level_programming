#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: given number
 *
 * Return: Last didgit of a given number
 */
int print_last_digit(int r)
{
	if (r < 0)
	{
		r = (-1 * (r % 10));
		_putchar(r + '0');
		return (r);
	}

	else
	{
		r = (r % 10);
		_putchar(r + '0');
		return (r);
	}
}
