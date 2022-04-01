#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: head node
 * Return: The data of head 0 if head is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int d;

	if (!*head)
		return (0);
	d = (*head)->n;
	new = (*head)->next;
	free(*head);
	*head = new;
	return (d);
}
