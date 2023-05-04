#include "lists.h"

/**
  *get_nodeint_at_index - returns a node an index in linked list
  *@head: first node in the list
  *@index: index to be returned
  *Return: NULL or pointer to the node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int n = 0;

	while (temp && n < index)
	{
		temp = temp->next;
		n++;
	}
	return (temp ? temp : NULL);
}
