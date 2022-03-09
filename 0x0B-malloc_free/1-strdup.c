#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string a copiar
 * Return: Null si str es null o no hay suficiente espacio
 */
char *_strdup(char *str)
{
	char *dup;
	int i;
	int l = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		l++;

	dup = malloc(sizeof(char) * (l + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	dup[l] = '\0';

	return (dup);
}
