#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch[] = "_putchar";
	int i = 0, len = strlen(ch);

	while (len)
	{
		_putchar(ch[i]);
		i++;
		len--;
	}
	_putchar('\n');
	return (0);
}
