#include "main.h"

/**
 * _strpbrk - busca el string, para la asignacion de los bytes
 * @s: cadena a chequear
 * @accept: caracter a localizar
 *
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j] ; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
