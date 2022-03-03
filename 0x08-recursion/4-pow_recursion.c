#include "main.h"

/**
 * _pow_recursion - Imprime el resultado de un número elevado a una potencia
 * @x: base
 * @y: potencia
 * Return: x elevado y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
