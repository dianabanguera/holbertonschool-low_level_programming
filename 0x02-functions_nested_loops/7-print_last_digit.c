#include "main.h"

/**
 * print_last_digit - main print_last_digit
 * @n: The character to be checked.
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
		x *= -1;
	_putchar(x + '0');
	return (x);
}
