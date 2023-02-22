#include "main.h"

/**
 * _islower - checks for lowercase
 *
 * @c: parameter that print alphabet
 *
 * Return: 0 if lowercase
 * and 1 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
