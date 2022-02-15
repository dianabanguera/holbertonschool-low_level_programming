#include "main.h"

/**
 * main imprime el ultimo digito del número
 *
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
		x *= -1;
	_putchar(x + '0');
	return (0);
}
