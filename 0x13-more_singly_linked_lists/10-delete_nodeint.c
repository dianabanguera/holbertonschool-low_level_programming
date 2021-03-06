#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node
 * @head: head node
 * @index: position node to be delete
 * Return: 1 if is okey, -1 if is failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	listint_t *tmp = *head;
	listint_t *tmp2;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (tmp)
	{
		if (index == idx + 1)
		{
			tmp2 = tmp->next;
			tmp->next = tmp2->next;
			free(tmp2);
			return (1);
		}
		tmp = tmp->next;
		idx++;
	}
	return (-1);
}
