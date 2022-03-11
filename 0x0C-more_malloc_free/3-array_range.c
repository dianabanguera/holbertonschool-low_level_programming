#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - function that creates an array of integers
 * @min: limite inferiro
 * @max: limite superior
 * Return: puntero
 *
 */
int *array_range(int min, int max)
{
	int i;
	int size;
	int *array;

	if (min > max)
	{
		return (NULL);
	}
	size = (max - min) + 1;
	array = malloc(sizeof(*array) * size);
	if (!array)
	{
		return (NULL);
	}
	for (i = 0; i < size && min <= max; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
