#include "main.h"

/**
 * print_triangle - imprime triangulo
 * @size: tamaño del triangulo
 */
void print_triangle(int size)
{
int a, i;

if (size > 0)
{

for (a = 1; a <= size; a++)
{

for (i = size - a; i > 0; i--)

_putchar(' ');

for (i = 0; i < a; i++)
_putchar('#');

if (a == size)
continue;

_putchar('\n');
}

}
_putchar('\n');
}
