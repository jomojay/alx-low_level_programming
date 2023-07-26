#include "main.h"

/**
 * _strncat - concatenates two strings up to n number of given bytes of src pointer content
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of bytes to be used in src pointer
 *
 * Return: Return a pointer of concatenated string via dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
	{
		i++;
	}
	while ((n > j) && src[j] != '\0')
		{
			dest[i] = src[j];
			i++;
			j++;
		}
	dest[i] = '\0';
	return (dest);
}
