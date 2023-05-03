#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *add_node - adds new node at the head
  *@h: pointer to head
  *@n: insert new node
  *return: ptr or NULL
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return(new);
}
