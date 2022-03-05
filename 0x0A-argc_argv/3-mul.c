#include <stdlib.h>
#include <stdio.h>

/**
 * main - Imprime la multiplicación de dos numeros
 * @argc: Numero de argumentos
 * @argv: Array de argumentos
 * Return: 0 si recieve dos argumentos, 1 si no recive dos argumentos
 */
int main(int argc, char *argv[])
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);
}
