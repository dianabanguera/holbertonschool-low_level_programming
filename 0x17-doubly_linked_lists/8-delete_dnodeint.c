#include "lists.h"

/**
 * delete_dnodeint_at_index - elimina el nodo en la posicion index
 * @head: cabecera de la lista
 * @index: posicion
 *
 * Return: 1 si es exitoso, -1 si falla
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *antes_node = *head, *temp_node = *head;

	if (index == 0 && *head)
	{
		if ((*head)->next)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
			free(temp_node);
		}
		else
			*head = NULL;
		return (1);
	}
	while (i < index - 1 && antes_node)
	{
		antes_node = antes_node->next;
		i++;
	}
	if (antes_node)
	{
		temp_node = antes_node->next;
		if (temp_node->next)
			temp_node->next->prev = antes_node;
		antes_node->next = temp_node->next;
		free(temp_node);
		return (1);
	}
	return (-1);
}
