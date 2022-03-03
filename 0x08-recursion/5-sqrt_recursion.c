#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - Imprime la raíz cuadrada de un número
 *
 * @n: numero al que se le va a calcular la raíz cuadrada
 *
 * Return: Raiz cuadrada
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - Recurso para encontrar la raiz de un número
 * @n: número al que se le va a calcular la raíz cuadrada
 * @i: iterador
 * Return: Resultado de la raíz cuadrada
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
