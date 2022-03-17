#include "function_pointers.h"

/**
 * print_name - imprime un nombre
 * @name: nombre a imprimir
 * @f: funcion con la que se imprime el nombre
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
