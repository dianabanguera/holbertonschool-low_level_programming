#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - prints all the elements of a linked list
 * @h: head node
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int counter = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
