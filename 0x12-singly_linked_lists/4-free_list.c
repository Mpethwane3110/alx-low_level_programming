#include <stdlib.h>
#include "lists.h"

/**
  *free_list - function that frees a list 
  *@h: list to be freed 
  *return:
  */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
