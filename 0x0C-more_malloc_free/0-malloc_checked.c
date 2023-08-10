#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using call
 * @b: size of the memory in bytes
 *
 * Return: Retunrs a void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
