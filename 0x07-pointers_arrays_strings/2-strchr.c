#include "main.h"

/**
 * _strchr - localiza un caracter en una cadena
 * @s: string de búsqueda
 * @c: charr a localizar
 * Return: pointer
 *
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
