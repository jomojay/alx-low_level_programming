#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: integer to be checked
 *
 * Return: computed absolute integer value
 */
int _abs(int n)
{
	int res;

	if (n < 0)
	{
		res = ((-1) * n);
		return (res);
	}
	else
		return (n);
}
