#include <stdio.h>

/**
*main - function that prints the name of
*the file it was compiled from
*
*Return: nothing to be return but zero
*/

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
