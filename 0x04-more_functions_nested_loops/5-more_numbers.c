#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 ten times
 *
 * Return: Always 0 (success)
 */
void more_numbers(void)
{
	int i = 0, j;

	while (i <= 9)
	{
		j = 0;

		while (j <= 14)
		{
			if (j < 10)
				_putchar(j + '0');
			else
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
