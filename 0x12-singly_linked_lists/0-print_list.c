#include "lists.h"

/**
 * print_list - prints all the elements present in list_t list
 * @h: constant pointer type list_t
 *
 * Return: numbers of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes;

	nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}
	return (nodes);
}
