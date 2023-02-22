#include "main.h"

/**
 * _isalpha - function that prints alphabet
 *
 * @c: parameter for alphabet
 *
 * Return: it returns 0 if alphabet
 * and returns 1 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
