#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: numero de parametros
 * Return: suma de los parametros
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int c;
	int sum = 0;
	va_list l;

	va_start(l, n);
	for (c = 0; c < n; c++)
		sum += va_arg(l, int);
	va_end(l);
	return (sum);
}
