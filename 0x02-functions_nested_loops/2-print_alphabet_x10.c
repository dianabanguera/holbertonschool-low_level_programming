#include "main.h"

/**
 * print_alphabet_x10 - main imprime el alfabeto 10 veces
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int c;
	int d = 0;

	while(d++ <= 9)
	{
		for (c = 'a'; c < 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
