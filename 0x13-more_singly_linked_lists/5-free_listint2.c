#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t
 * @head: head
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *next_node;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}
	*head = NULL;
}
