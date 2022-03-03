#include "main.h"

/**
 * _strlen_recursion - Imprime el tamaño de un string
 *
 * @s: string a medir
 * Return: value
 */
int _strlen_recursion(char *s)
{
	if (!s || !*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
