#include <stdio.h>

/**
 * main - numbers using putchar
 *
 * Return: it is zero
 */

int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
		putchar(n + '0');
	putchar('\n');
	return (0);
}
