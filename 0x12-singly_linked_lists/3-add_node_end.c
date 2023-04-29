#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  *add_node_end - add node at the tail
  *@h: pointer to thhe list
  *@str: string to inser in the node
  *return: address of new element or NULL if failed
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));

	if (!new)

	return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	temp->next = new;
		return (new);
}
