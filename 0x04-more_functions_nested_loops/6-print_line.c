#include "main.h"

/**
 * print_line - Imprime una linea
 * @n: variable
 * Return: 0
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
