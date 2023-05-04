#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *a function that adds a new node at the end of a listint_t list.
  *
  *Return: the address of the new element, or NULL if it failed
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*h == NULL)
	{
		*h = new;
		return (new);
	}
	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new;

	return (new);
}
