#include "main.h"

/**
 * _islower - verifica que caracteres estan en minuscula
 * @c: The character to be checked.
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
