#include "main.h"

/**
 * main verifica el caracter alfabetico
 *
 * Return: ALways 0
 */
int _isalpha(int c)
{
	if(c >= 'A' && c <= 'Z')
	{
		return (1);
	}else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}else
	{
		return (0);
	}


}
