#include "main.h"

/**
 * main - init
 * print alphabet 
 * Return: ALways 0
 */
void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}
