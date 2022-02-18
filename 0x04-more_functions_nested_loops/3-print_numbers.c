#include "main.h"

/**
 * print_numbers - prints the numbers 0-9
 * @c: Character to check
 * Return: ALways 0
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return(0);
}
