#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - calculate the number of elements in the linked lists
 * @h: pointer to the list
 *
 * Return: integer
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
