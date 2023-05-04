#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - calculate the sum of all the data in linked list
 *@head: first node
 * Return: 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

