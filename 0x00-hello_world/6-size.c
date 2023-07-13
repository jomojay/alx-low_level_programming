#include <stdio.h>

/**
 * This program prints the respextive sizes of data types on any given machine
 *
 * Returns: 0(successful)
 */
int main(void)
{
	int a;
	char b;
	float c;
	long int d;
	long long int e;

	printf("Size of a char: %lu byte(s)\n", sizeof(b));
	printf("Size of an int: %lu byte(s)\n", sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", sizeof(d));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(e));
	printf("Size of a float: %lu byte(s)\n", sizeof(c));

	return (0);
}
