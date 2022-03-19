#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: is a list of types of agruments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	char *strg, *separator = "";

	i = 0;
	va_start(args, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(args, double));
					break;
				case 's':
					strg = va_arg(args, char *);
					if (!strg)
						strg = "(nil)";
					printf("%s%s", separator, strg);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
