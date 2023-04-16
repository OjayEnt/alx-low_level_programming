#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints the nodes of a singly linked list
 * @head: list of type listint_t to print
 *
 * Return: counter variable
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	long int diff;

	while (head)
	{
		diff = head - head->next;
		count++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (count);
}
