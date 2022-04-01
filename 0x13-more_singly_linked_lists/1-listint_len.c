#include "lists.h"

/**
 * listint_len - function that return the num of elements in alist
 * @h: node
 * Return: counter
 */
size_t listint_len(const listint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
