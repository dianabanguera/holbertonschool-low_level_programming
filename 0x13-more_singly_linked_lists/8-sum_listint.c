#include "lists.h"

/**
 * sum_listint -  function that returns the sum of all the data of the link
 * @head: head of the list
 * Return: add
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	if (!head)
		return (0);
	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
