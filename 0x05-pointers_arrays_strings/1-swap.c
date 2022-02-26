#include "main.h"

/**
 * swap_int - intercambia el valor de dos enteros
 * @a: variable a intercambiar
 * @b: segunda variable aintercambiar
 *
 */
void swap_int(int *a, int *b)
{
	int d = *a;

	*a = *b;
	*b = d;
}
