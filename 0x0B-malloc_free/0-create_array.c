#include "main.h"
#include <stdlib.h>

/**
 * create_array - crea un array de caracteres que inicia en c
 * @size: Tamaño de array
 * @c: caracter con el que va iniciar el caracter
 *
 * Return: Si el tamaño es 0 o falla es NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
