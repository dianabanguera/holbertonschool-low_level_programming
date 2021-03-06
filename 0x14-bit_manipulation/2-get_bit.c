#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @index: index
 * @n: number
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int counter = 0;

	if (index > 63)
	{
		return (-1);
	}
	while (counter < 63)
	{
		if (counter == index)
		{
			if ((n >> counter) & (1))
			{
				return (1);
			}
			else
				return (0);
		}
		counter++;
	}
	return (-1);
}
