#include "main.h"

/**
 * square_root - determines the square root of
 * @num: num to find its square root
 * @fac: stating factor
 * Return: returns fac if successful or -1 if not
 */

int is_square_root(int num, int fac)
{
	if (fac * fac > num)
	{
		return (-1);
	}
	if (fac * fac == num)
	{
		return (fac);
	}
	return (is_square_root(num, fac + 1));
}

/**
 * _sqrt_recursion - returns square root
 * @n: input size
 * Return: returns the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (is_square_root(n, 1));
}
