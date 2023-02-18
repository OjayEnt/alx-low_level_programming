#include <stdio.h>

/**
 * main - sizes of computer
 *
 * Return: it tends to zero
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char), "\n");
	print("Size of an int: %lu byte(s)", sizeof(int), "\n");
	printf("Size of a long int: %lu byte(s)", sizeof(long int), "\n");
	printf("Size of a long long int: %lu byte(s)", sizeof(long long int), "\n");
	printf("Size of a float: %lu byte(s)", sizeof(float), "\n");
	return (0);
}
