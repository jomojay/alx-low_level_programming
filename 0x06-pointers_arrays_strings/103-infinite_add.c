#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to dest.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, add, max, num1, num2, cry = 0;

	len1 = strlen(n1);
	len2 = strlen(n2);
	max = (len1 > len2) ? len1 : len2;
	if (size_r <= max + 1)
		return (0);
	r[max + 1] = '\0';
	len1--, len2--, size_r--;
	num1 = *(n1 + len1) - 48, num2 = *(n2 + len2) - 48;
	while (max >= 0)
	{
		add = num1 + num2 + cry;
		if (add >= 10)
			cry = add / 10;
		else
			cry = 0;
		if (add > 0)
			*(r + max) = (add % 10) + 48;
		else
			*(r + max) = '0';
		if (len1 > 0)
			len1--, num1 = *(n1 + len1) - 48;
		else
			num1 = 0;
		if (len2 > 0)
			len2--, num2 = *(n2 + len2) - 48;
		else
			num2 = 0;
		max--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
