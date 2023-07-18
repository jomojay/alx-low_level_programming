#include "main.h"

/**
 * print_alphabet - Prints alphabets in lowercase letters
 *
 * Description - It doesn't take argument and doesn't return any value.
 * Return: Void
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
