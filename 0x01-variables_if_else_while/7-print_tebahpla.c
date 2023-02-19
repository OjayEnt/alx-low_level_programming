#include <stdio.h>

/**
 * main - loweecase in reverse
 *
 * Return: it is 0
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
