#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - Indica si un número es primo
 * @n: Número a verificar
 *
 * Return: 1 si es primo, 0 si no lo es
 *
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - Calcula de forma recursiva si un numero es primo
 * @n: numero a verificar
 * @i: Iterador
 * Return: 1 si es primo, 0 si no lo es
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
