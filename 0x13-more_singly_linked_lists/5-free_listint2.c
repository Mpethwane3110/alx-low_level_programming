#include <stdio.h>
#include "lists.h"

/**
  *free_listint2 - frees alist
  *@head: list to be freed on listint_t
  *Return:
  *
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
