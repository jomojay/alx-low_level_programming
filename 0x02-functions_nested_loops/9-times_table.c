#include "main.h"

/**
 * times_table - prints 0 - 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i = 0, d, j;

	while (i <= 9)
	{
		j = 0;
		d = 0;

		while (j <= 9)
		{
			d = i * j;

			if ((d / 10) == 0)
			{
				if (j == 0)
					_putchar('0');
				else
				{
					_putchar(' ');
					_putchar((d % 10) + '0');
				}
			}
			else
			{
				_putchar((d / 10) + '0');
				_putchar((d % 10) + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
