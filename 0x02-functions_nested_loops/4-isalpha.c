#include "main.h"

/**
 * _isalpha - verifica el caracter alfabetico
 * @c: The character to be checked.
 * Return: ALways 0
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	} else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
