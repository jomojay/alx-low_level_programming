#include "main.h"

/**
 * leet - Entry point
 * @s: input string.
 * Return: Always 0.
 */
char *leet(char *s)
{
	int count = 0, i;
	int low_case[] = {97, 101, 111, 116, 108};
	int up_case[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (s[count] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[count] == low_case[i] || s[count] == up_case[i])
			{
				s[count] = numbers[i];
				break;
			}
		}
		count++;
	}

	return (s);
}
