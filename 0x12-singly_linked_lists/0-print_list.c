#include <stdio.h>
#include "lists.h"

/**
  *Print_list - function that prints all the elements of a list
  *@h: pointer to the list 
  *Return: number of nodes
  */

size_t print_list(const list_t *h);
{
	size_t s = 0;
	while (h)
	{
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
		if (!h->str)
			printf("[0] (nil)\n");
	}
	return s;
}
