#include "main.h"

/**
 * _strspn - indica el tamaño del prefijo de una cadena
 * @s: cadena a chequear
 * @accept: caracter a localizar
 * Return: numero de caracteres
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int matchs = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j] ; j++)
		{
			if (*s == accept[j])
			{
				matchs++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (matchs);
			}
		}
		s++;
	}
	return (matchs);
}
