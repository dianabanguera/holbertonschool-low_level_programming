#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - init
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10)
		printf("%d Last digit\n", n);


	return (0);

}
