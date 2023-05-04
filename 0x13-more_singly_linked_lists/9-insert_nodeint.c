#include "lists.h"

/**
  *insert_nodeint_at_index - inserts a new node in te linked list
  *@head: pointer to the first node in the linked list
  *@idx: index where the new node is
  *@n: information to add in the new node
  *Return: NULL or pointer to the new node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *new;

	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
	else
		temp = temp->next;
	}
	return (NULL);
}
