#include <stdio.h>

/**
 * main - Imprime todos los argumentos que recive
 * @argc: Numero de argumentos
 * @argv: Array de argumentos
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int arg;

for (arg = 0; arg < argc; arg++)
printf("%s\n", argv[arg]);
return (0);
}
