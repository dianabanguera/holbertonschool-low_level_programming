#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - imprime los numeros hasta el 98
 * @a: variable a checkear
 * Return: Always 0
 */
void print_to_98(int a)
{
	if (a <= 98)
	{
	for (a = a; a <= 97; a++)
		printf("%d, ", a);
	}
	else
		for (a = a; a > 98; a--)
			printf("%d, ", a);
	printf("98\n");
}
