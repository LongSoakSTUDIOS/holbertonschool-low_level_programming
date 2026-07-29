a#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings followed by new line
 * @separator: string between strings
 * @n: number of strings
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	const char *str;

	va_start(ap, n);
	i = 0;
	while (i < n)
	{
		*str = va_arg(ap, const char *);
		printf("%s", str);
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}

