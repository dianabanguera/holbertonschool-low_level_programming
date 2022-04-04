#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int d;
	unsigned int number;

	number = 0;

	if (!b)
		return (0);
	for (d = 0; b[d] != '\0'; d++)
	{
		if (b[d] != '0' && b[d] != '1')
			return (0);
	}
	for (d = 0; b[d] != '\0'; d++)
	{
		number <<= 1;
		if (b[d] == '1')
		number += 1;
	}
	return (number);
}
