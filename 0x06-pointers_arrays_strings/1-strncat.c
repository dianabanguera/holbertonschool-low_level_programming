#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: cadena para agregar por src
 * @src: cadena para agregar por dest
 * @n: numero
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int p;
	int j;

	p = 0;
	while (dest[p] != '\0')

	p++;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[p] = src[j];
		p++;
		j++;
	}
	dest[p] = '\0';
	return (dest);
}
