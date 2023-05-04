#include <stdio.h>
#include "lists.h"

/**
  *pop_listint - deletes the head node on a lined list
  *@head: pointer to the head elements in a linked list
  *Return:0 if empty or info in the deleted element
  */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head || !*head)
		return (0);
	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}


