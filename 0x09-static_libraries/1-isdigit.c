#include "main.h"

/**
 * _isdigit - Checks if a given character is a digit
 * @c: given character
 *
 * Return: Return 1 if true and 0 if not.
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
