#include "main.h"

/**
 * main - verifica que caracteres estan en minuscula
 *
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}else
	{
		return (0);
	}
}
