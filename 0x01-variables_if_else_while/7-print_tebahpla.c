#include <stdlib.h>
#include <stdio.h>

/**
 * main - init
 * Return: Always 0
 */
int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a'; alph--)
		putchar(alph);
	putchar ('\n');

	return (0);
}
