#include "main.h"

/**
 * _strstr - searches a string for any of a set of bytes
 * @haystack: pointer to the string to be searched
 * @needle: pointer to the desired string
 * Return: Returns a pointer to the byte in s
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
