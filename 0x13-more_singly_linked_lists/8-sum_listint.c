#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - it calculates the sum of all data in a listint_t list
 * @head: first node
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
