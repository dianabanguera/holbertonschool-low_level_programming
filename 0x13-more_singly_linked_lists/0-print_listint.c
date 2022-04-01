#include "lists.h"
#include <stdlib.h>

/**
 * print_listint - function that prints all the elements of a list
 * @h: list
 * Return: counter
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
