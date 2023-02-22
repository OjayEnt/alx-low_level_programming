#include "main.h"

/**
 * print_sign - function that print sign
 *
 * @n: parameter for numbers
 *
 * Return: 1 if positive
 * and 0 if zero
 * and -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
