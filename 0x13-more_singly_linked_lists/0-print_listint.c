#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node strucy
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		putchar("%d", h->n);
		n++;
		h = h->next;
	}
	return (n);
}

