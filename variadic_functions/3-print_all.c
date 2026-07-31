#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <string.h>

/**
 * print_all - prints anything input
 * @format: format of inputted args
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i;
	int j;
	char *x[] = {
		", ",
		", ",
		", ",
		"\n"
	};
	va_list ag;
	formats_t formats[] = {
		{"c", printchar},
		{"i", printint},
		{"f", printfloat},
		{"s", printstring},
		{NULL, NULL}
		};

	i = 0;
	va_start(ag, format);

	while (formats[i].formatchar != NULL && format != NULL)
	{
		j = 0;
		while (format[j] != '\0')
		{
			if (formats[i].formatchar[0] == format[j])
			{
				formats[i].f(ag);
				printf("%s", x[i]);
			}
			j++;
		}
		i++;
	}
	va_end(ag);
	printf("\n");
}
/**
 * printchar - prints a character
 * @var: list of arguments
 *
 * Return: nothing
 */
void printchar(va_list var)
{
	printf("%c", va_arg(var, int));
}
/**
 * printint - prints int
 * @var: list of argueents
 *
 * Return: nothing
 */
void printint(va_list var)
{
	printf("%d", va_arg(var, int));
}
/**
 * printfloat - prints a float
 * @var: list of arguments
 *
 * Return: nothing
 */
void printfloat(va_list var)
{
	printf("%.2f", va_arg(var, double));
}
/**
 * printstring - prints a float
 * @var: list of arguments
 *
 * Return: nothing
 */
void printstring(va_list var)
{
	char *s;

	s = va_arg(var, char *);
	if (var == NULL)
	{
		s = "(nil)";
	}
	printf("%s", s);
}
