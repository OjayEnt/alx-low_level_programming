#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint - Add a new node at the beginning of a list
 * @head: Address of the first node of a list
 * @n: data to insert into the new node
 *
 * Return: pointer to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tp;

	tp = malloc(sizeof(listint_t));
	if (tp == NULL)
		return (NULL);

	tp->n = n;
	tp->next = *head;
	*head = tp;
	return (*head);
}
