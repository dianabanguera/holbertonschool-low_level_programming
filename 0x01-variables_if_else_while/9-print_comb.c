#include <stdio.h>
#include <math.h>

/**
 * main - init
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		putchar(',');
		putchar(32);
	}
	putchar ('\n');
	return (0);
}
