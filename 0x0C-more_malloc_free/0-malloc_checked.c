#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: memoria
 * Return: array 
 *
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *arr;

	arr = malloc(sizeof(unsigned int) * b);
	return (arr);
}
