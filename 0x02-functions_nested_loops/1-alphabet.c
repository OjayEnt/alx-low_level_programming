#include "main.h"

/**
 * print_alphabet - function that print lower case alphabet
 *
 * Return: it is zero
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
