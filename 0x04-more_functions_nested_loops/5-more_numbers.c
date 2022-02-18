#include "main.h"

/**
 * more_numbers - print numbers 0-14 for 10 times
 * @c
 * Return: The numbers
 */
void more_numbers(void)
{
	int c;
	int d = 0;

	while (d++ <= 9)
	{
		for (c = 0; c <= 14; c++)
		{
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
