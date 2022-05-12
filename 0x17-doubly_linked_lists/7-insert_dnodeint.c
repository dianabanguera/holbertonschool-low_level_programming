#include "lists.h"

/**
 * insert_dnodeint_at_index - inserta un nodo en una posicion dada
 * @h: cabecera de la lista
 * @idx: posicion donde se va ingresar el nodo
 * @n: valor de los elementos
 *
 * Return: direccion del nuevo nodo o NULL si falla
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *temp_node = *h;

	if (new_node)
	{
		new_node->n = n;
		if (idx == 0)
		{
			if (*h)
			{
				new_node->next = *h;
				(*h)->prev = new_node;
			}
			*h = new_node;
			return (new_node);
		}
		while (i < idx - 1 && temp_node)
		{
			temp_node = temp_node->next;
			i++;
		}
		if (temp_node)
		{
			if (temp_node->next)
			{
				temp_node->next->prev = new_node;
			}
			new_node->next = temp_node->next;
			new_node->prev = temp_node;
			temp_node->next = new_node;
			return (new_node);
		}
	}
	return (NULL);
}
