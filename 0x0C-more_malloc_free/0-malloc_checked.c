#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: numero de bytes que seran ubicados en memoria
 * Return: puntero
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *arr;

	arr = malloc(sizeof(unsigned int) * b);
	if (!arr)
	{
		exit(98);
	}

	return (arr);
}
