#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *reverse_listint - reverses a listint list
 *@head: pointer to list
 *
 *Return: pointer to last node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *init_node = NULL, *next_node;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	next_node = (*head)->next;
	for (; next_node; next_node = (*head)->next)
	{
		(*head)->next = init_node;
		init_node = *head;
		*head = next_node;
	}
	(*head)->next = init_node;
	return (*head);
}
