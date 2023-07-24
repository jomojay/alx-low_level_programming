#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to the string to be printed
 *
 * Return: Null
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (s[i])
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
