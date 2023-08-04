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
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return(1);
	}
}
