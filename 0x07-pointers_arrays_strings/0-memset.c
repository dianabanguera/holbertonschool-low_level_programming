#include "main.h"

/**
 * _memset - llena la memoria con bytes constantes
 *
 * @s: el puntero
 * @b: char para llenar
 * @n: numero de bytes que seran cambiados de valor
 * Return: s
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
