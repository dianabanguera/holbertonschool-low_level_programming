#include "main.h"

/**
 * more_numbers - print numbers 0-14 for 10 times
 * @c
 * Return: The numbers
 */
void more_numbers(void)
{
	int c;
	int d;

	for (d = 0; d <= 9; d++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
