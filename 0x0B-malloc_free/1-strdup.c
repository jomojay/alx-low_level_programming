#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer to the string to be copied
 *
 * Return: Returns pointer (success) or NULL
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int j, i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}
	i++;
	ptr = (char *)malloc(i * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	j = 0;

	while (j < i)
	{
		ptr[j] = str[j];
		j++;
	}
	return (ptr);
}
