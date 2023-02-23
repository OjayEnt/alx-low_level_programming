#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - the main function
 *
 * @n: the parameter
 *
 * Return: it is zero
 */

void print_to_98(int n)
{
	int i;

	if (n >= 0 && n <= 97)
	{
		for (i = n ; i <= 97 ; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (i = n ; i >= 98 ; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n == 98)
		printf("%d\n", n);
}
