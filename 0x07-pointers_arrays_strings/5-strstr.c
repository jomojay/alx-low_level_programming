#include "main.h"

/**
 * _strstr - searches a string for any of a set of bytes
 * @haystack: pointer to the string to be searched
 * @needle: pointer to the desired string
 * Return: Returns a pointer to the byte in s
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j, flag;
	char *tmp = 0;

	while (haystack[i] != '\0')
	{
		j = 0;

		while (needle[j] != '\0')
		{
			if (haystack[i + j] == needle[j])
			{
				if (tmp == 0)
				{
					tmp = (haystack + i);
					flag = 1;
					j++;
				}
				else
				{
					flag = 1;
					j++;
				}
			}
			else
				break;
		}
		if (flag)
			return (tmp);
		i++;
	}
	return (0);
}
