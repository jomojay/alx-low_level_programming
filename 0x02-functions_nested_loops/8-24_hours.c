#include "main.h"

/**
 * jack_bauer - prints every minutes of every hour
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i = 0, j;

	while (i <= 23)
	{
		j = 0;

		while (j < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}
