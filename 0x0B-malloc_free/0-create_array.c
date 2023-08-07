#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of char.
 * @size: size of array
 * @c: character to initialize the array with
 *
 * Return: Returns pointer (success) or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	ptr = (char *)malloc(size * sizeof(char));
	if ((size == 0) || (ptr == NULL))
		return (NULL);
	while (i < size)
	{
		*(ptr + i) = c;
		i++;
	}
	return (ptr);
}
