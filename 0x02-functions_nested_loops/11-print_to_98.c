#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print to 98 from a given number
 * @n: Entry value
 *
 * Return: Null.
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >= 98)
		{
			if (n > 98)
				printf("%d, ", n);
			else
				printf("%d", n);
			n--;
		}
		putchar('\n');
	}
	else if (n <= 98)
	{
		while (n <= 98)
		{
			if (n < 98)
                        	printf("%d, ", n);
			else
				printf("%d", n);

			n++;
		}
		putchar('\n');
	}
}
