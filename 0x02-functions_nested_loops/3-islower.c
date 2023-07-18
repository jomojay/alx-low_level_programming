#include "main.h"

/**
 * _islower - checks if a character is a lowercase letter or not
 * @c: character to be checked
 *
 * Return: 1 on success, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
