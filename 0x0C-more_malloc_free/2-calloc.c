#include "main.h"
#include <stdlib.h>

/**
 * calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each elememnts in size
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	while (i < nmemb)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
