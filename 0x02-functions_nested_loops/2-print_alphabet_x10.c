#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase 10 times
 *
 * Description - Doesn't take or return any arg or value
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
