#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: memoria
 * Return: array
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
