#include <stdio.h>

/**
 * main - main argument
 * @argc: argument count
 * @argv: argument vector
 * Return: zero
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc-1);
	return (0);
}
