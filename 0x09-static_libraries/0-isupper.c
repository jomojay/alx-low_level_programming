#include "main.h"

/**
 * _isupper - Checks if a given character is uppercase letter
 * @c: given character
 *
 * Return: Return 1 if true and 0 if not.
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
