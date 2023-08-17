#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all its parameters
 * @n: parameters count
 *
 * Return: Return the sum of all passed args
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
