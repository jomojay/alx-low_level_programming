#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: given number
 *
 * Return: Last didgit of a given number
 */
int print_last_digit(int n)
{
	int abs, res;
	if (n < 0)
	{
		abs = ((-1) * n);
		res = (abs % 10);
		_putchar (res + '0');
	}
	else
	{
		res = (n % 10);
		_putchar (res + '0');
	}
	return (res);
}
