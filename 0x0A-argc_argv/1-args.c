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
	(void)**argv;
	printf("%d\n", (argc - 1));
	return (0);
}
