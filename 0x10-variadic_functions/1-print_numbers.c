#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: separador
 * @n: números
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int o;
	va_list l;

	va_start(l, n);
	for (o = 0; o < n; o++)
	{
		if (!separator)
			printf("%d", va_arg(l, int));
		else if (separator && o == 0)
			printf("%d", va_arg(l, int));
		else
			printf("%s%d", separator, va_arg(l, int));
	}
	va_end(l);
	printf("\n");
}
