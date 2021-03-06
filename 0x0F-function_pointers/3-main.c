#include "3-calc.h"

/**
 * main - ejecuta operaciones
 * @argc: numero de argumentos
 * @argv: array de argumentos
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*result)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (b == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(argv[2]);
	if (result == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", result(a, b));
	return (0);
}
