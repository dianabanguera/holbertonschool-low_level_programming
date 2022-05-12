#include "lists.h"

/**
 * free_dlistint - libera la lista
 * @head: nodo inicial de la lista
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *tmp_node = NULL;

    while (head != NULL)
    {
        tmp_node = head->next;
        free(head);
        head = tmp_node;
    }
}
