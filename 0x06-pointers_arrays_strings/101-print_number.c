#include "main.h"

/**
 * print_number - Prints given integer without using arrays or pointers
 * @n: input integer.
 * Return: no return.
 */

void print_number(int n)
{
	int temp, div;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	else
		temp = n;
	temp = n;
	div = 1;

	while (temp > 9)
	{
		temp /= 10;
		div *= 10;
	}
	while (div > 0)
	{
		_putchar('0' + (n / div));
		n %= div;
		div /= 10;
	}
}
