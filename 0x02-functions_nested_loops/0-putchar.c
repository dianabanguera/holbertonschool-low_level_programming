#include "main.h"


/**
 * main imptimir la palabra _putchar con un espacio
 * Return: ALways 0
 */
int main(void)
{
	char y[] = "_putchar";
	int z = 0;

	while (y[z] != '\0')
	{
		_putchar(y[z]);
		z++;
	}

	_putchar('\n');

	return (0);
}
