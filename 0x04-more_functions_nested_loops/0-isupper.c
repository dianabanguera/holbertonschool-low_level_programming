#include "main.h"

/**
 * _isupper - verifica que caracteres estan en mayuscula
 * @c: The character to be checked.
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
