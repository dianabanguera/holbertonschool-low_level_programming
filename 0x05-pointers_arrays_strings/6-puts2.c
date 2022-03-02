#include "main.h"

/**
 * puts2 - imprime una cadena
 * @str: string s colocar
 */
void puts2(char *str)
{
	int i;
	int l = 0;
	char *y = str;

	while (*y != '\0')
	{
		y++;
		l++;
	}
	for (i = 0; i <= l - 1; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
