#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 *
 * Return: Returns pointer (success) or NULL
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0, k = 0, lenp = 0, lens1 = 0, lens2 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	lenp = i + j + 1;
	lens1 = i;
	lens2 = j;

	ptr = (char *)malloc(lenp * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;

	while (i < lens1)
	{
		ptr[k] = s1[i];
		i++;
		k++;
	}
	j = 0;

	while (j < lens2)
	{
		ptr[k] = s2[j];
		j++;
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}
