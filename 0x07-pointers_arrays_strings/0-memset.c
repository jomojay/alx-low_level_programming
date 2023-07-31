#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the intended memory
 * @b: constant to fill the memory with
 * @n: the first nth byte to be filled
 *
 * Return: Retunr the pointer to the memory being worked on
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
