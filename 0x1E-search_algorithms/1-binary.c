#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located
 * -1 If value is not present in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start, end, i;

	if (array == NULL || size == 0)
		return (-1);
	for (start = 0, end = size - 1; end >= start;)
	{
		printf("Searching in array: ");
		for (i = start; i < end; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = (start + end) / 2;
		if (array[i] == value)
			return (i);
		else if (array[i] < value)
			start = i + 1;
		else
			end = i - 1;
	}
	return (-1);
}

