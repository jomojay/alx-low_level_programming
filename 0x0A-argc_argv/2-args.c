#include <stdio.h>

/**
 * main - entry point
 * @argc: argument counter
 * @argv: pointer to an array of string(s)
 *
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
