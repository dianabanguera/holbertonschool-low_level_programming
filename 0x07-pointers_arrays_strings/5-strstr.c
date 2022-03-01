#include "main.h"

/**
 * _strstr - localiza un substring
 * @haystack: string a chequear
 * @needle: string a localizar
 * Return: puntero
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}
		if (*j == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
