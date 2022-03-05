#include <stdio.h>

/**
  * main - Imprime el nombre de un programa
  * @argc: número de argumentos
  * @argv: array de argumentos
  * Return: 0
  */
int main(int attribute((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
