#include "main.h"

/**
 * _strcpy - copia el string
 * @dest: bufer para copiar el string
 * @src: string de origen
 *
 * Return: puntero
 */
char *_strcpy(char *dest, char *src)
{
	int a, i;

	a = 0;

	while (src[a] != '\0')
	{
		a++;
	}
	for (i = 0; i < a; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
