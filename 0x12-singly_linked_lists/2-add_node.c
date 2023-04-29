#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  *add_node - function that adds new node at the head of a list
  *@h: pointer to the list
  *@str: needs to be dupicated
  *return: address of the new element or NULL if failed
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (**head);
	(*head) = new;
	return (**head);
}
