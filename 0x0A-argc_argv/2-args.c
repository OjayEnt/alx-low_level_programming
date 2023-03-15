#include <stdio.h>

/**
 * main - main argument
 * @argc: argument count
 * @argv: argument vector
 * Return: returns back to zero
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
		printf("%s\n", argv[i]);
	return (0);
}
