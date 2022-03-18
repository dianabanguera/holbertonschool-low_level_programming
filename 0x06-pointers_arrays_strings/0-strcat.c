#include "main.h"

/**
 * _strcat - concatena dos string
 * @dest: cadena para agregar src
 * @src: cadena para agregar dest
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int hello = 0, world = 0;

	while (dest[hello] != '\0')
	{
		hello++;
	}
	while ((dest[hello + world] = *src++) != '\0')
	{
		world++;
	}
	return (dest);
}
