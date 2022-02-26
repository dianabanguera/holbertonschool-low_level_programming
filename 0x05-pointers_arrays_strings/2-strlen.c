#include "main.h"
#include <string.h>

/**
 * _strlen - function that return the length of a string
 * @str: string
 * Return: Largo del string
 */

int _strlen(char *str)
{
	int l = 0;

	while (*str++)
	{
		l++;
	}
	return (l);

}
