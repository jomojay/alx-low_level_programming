#include "main.h"

/**
 * _strncpy - copies string from src to dest
 * @dest: pointer to destination
 * @src: pointer to source string
 * @n: number of characters to copy from 0th index
 *
 * Return: Return a pointer to a copy of src  string via dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while ((n > i) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (n > i)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
