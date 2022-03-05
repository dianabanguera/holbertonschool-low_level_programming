#include <stdio.h>

/**
 * main - Imprime el numero de argumentos
 * @argc: Numero de argumentos dados por el programa
 * @argv: Array de argumentos
 * Return: Always 0.
 *
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
