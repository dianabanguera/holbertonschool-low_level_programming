#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: the list
 * Return: sum
 */
size_t list_len(const list_t *h)
{
	size_t sum = 0;

	while (h)
	{
		h = h->next;
	sum++;
	}
	return (sum);
}
