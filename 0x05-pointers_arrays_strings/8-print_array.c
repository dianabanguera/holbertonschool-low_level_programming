#include <stdio.h>
#include "main.h"

/**
 * print_array - Imprime los elementos de un array
 * @a: array
 * @n: numero de elementos a imprimir
 */
void print_array(int *a,  int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		printf("%d", a[m]);
		if (m != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
