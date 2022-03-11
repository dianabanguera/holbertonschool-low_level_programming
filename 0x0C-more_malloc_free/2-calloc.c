#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: numero de blocks
 * @size: tamaño de block
 * Return: puntero
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(nmemb * size);
	if (!array)
	{
		return (NULL);
	}
	for (; i < nmemb * size; i++)
	{
		array[i] = 0;
	}
	return (array);
}
