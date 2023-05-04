#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a listintt
 * 
 * @next: points to the next node
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d", h->n);
		n++;
		h = h->next;
	}
	return (n);
}

