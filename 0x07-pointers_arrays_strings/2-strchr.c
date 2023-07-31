#include "main.h"

/**
 * _strchr - locates a character in string
 * @s: pointer to the string
 * @c: character to be searched for
 *
 * Return: Return a pointer to the first occurence of 'c'
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((s + i));
		i++;
	}
	return (0);
}
