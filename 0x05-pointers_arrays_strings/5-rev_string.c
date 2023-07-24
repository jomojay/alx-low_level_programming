#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointer to the string to be reversed
 *
 * Return: Null
 */
void rev_string(char *s)
{
	int len = 0, k = 0;
	char tmp;

	while (s[len] != '\0')
	{
		len++;
	}
	len--;
	while (k <= len)
	{
		tmp = s[k];
		s[k] = s[len];
		s[len] = tmp;
		len--;
		k++;
	}
}
