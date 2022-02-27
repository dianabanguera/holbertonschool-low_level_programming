#include "main.h"

/**
 * print_rev - imprime el reverso de un string
 *
 * @s: string reverse
 */
void print_rev(char *s)
{
int i = 0;
int j = 0;

while (*s != '\0')
{
j++;
s++;
}
s--;
for (i = j; i > 0; i--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
