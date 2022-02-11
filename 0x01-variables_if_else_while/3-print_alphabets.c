#include <stdio.h>

/**
 * main - init
 * Return: Always 0
 */

int main(void)
{
	char alph;
	char alph2;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);
	for (alph2 = 'A'; alph2 <= 'Z'; alph2++)
		putchar(alph2);
	putchar ('\n');
	return (0);
}
