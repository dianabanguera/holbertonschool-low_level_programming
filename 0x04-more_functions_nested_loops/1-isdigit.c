#include "main.h"

/**
 * _isdigit - Checks digit from 0-9
 * @c: Numero a chekear
 * Return: 1 si el numero es un digito, de lo contrario 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
