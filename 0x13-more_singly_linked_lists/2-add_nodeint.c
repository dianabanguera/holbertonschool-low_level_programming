#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning
 * @head: head
 * @n: integer
 * Return: new output of the element, or null if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (head == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
