#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
  *free_listint - free the lined list
  *@h: head node of the list
  *return: void
  */

void free_listint(listint_t *head)
{
	listint_t *current, *tmp;

	current = head;

	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
	head = NULL;
}
