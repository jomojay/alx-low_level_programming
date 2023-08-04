#include "main.h"

/**
 * _strspn - gets the length of a prefix sub string
 * @s: pointer to the string
 * @accept: pointer to the desired set of characters
 * Return: Return the number of bytea in the prefix of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, count = 0, j, flag;

	while (s[i] != '\0')
	{
		j = 0;
		flag = 0;

		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			while (accept[j] != '\0')
			{
				if (s[i] == accept[j])
				{
					flag = 1;
					count++;
				}
				j++;
			}
		}
		i++;

		if (flag == 0)
			break;
		}
	return (count);
}
