#include "main.h"

/**
 * _strlen -breturns the length of a given string
 * @s: pointer to the string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
