#include "main.h"

/**
 * _memcpy - copia el area de memoria
 * @dest: puntero
 * @src: puntero donde indica de donde se copiaran los datos
 * @n: numero de bytes a copiar
 * Return: nada
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int byte = n;

	for (i = 0; i < byte; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
