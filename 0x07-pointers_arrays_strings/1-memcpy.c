#include "main.h"

/**
 * _memcpy - copies memory area of an address to another
 * @dest: pointer to destination memory
 * @src: pointer to source
 * @n: the first nth byte to be filled
 *
 * Return: Retunr dest pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
