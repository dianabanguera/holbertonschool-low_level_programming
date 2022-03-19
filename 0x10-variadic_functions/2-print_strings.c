#include "variadic_functions.h"

/**
 * print_strings - imprime string
 * @separator: separador
 * @n: string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int o;
char *strg;
va_list l;

va_start(l, n);
for (o = 0; o < n; o++)
{
strg = va_arg(l, char *);
if (strg)
printf("%s", strg);
else
printf("(nil)");
if (o < n - 1 && separator)
printf("%s", separator);
}
va_end(l);
printf("\n");
}
