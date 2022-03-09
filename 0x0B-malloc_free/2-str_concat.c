#include "main.h"2
#include <stdlib.h>

/**
 * str_concat - concatena dos string
 * @s1: Primer string a concatenar
 * @s2: Segundo string a concatenar
 *
 * Return: Null si no se concatenan o no hay suficiente espacio
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i;
	int concat_i;
	int l;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		l++;

	concat_str = malloc(sizeof(char) - l);

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat_str[concat_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat_str[concat_i++] = s2[i];

	return (concat_str);
}
