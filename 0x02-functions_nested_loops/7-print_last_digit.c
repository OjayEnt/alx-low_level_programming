#include "main.h"

/**
 * print_last_digit - the function
 *
 * @i: the given character
 *
 * Return: it is k
 */

int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
