#include "main.h"

/**
 * factorial - Imprime el factorial de un número
 * @n: Número al que se le va aplicar el factorial
 * Return: factorial
 *
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
