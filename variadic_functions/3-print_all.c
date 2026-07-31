#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <string.h>

typedef struct op{
	char *formatchar;
	void (*f)(va_list);

}	formats_t;

void printchar(va_list var)
{
	vprintf("%c", var);
}

void printint(va_list var)
{
	vprintf("%d", var);
}

void printfloat(va_list var)
{
	vprintf("%.2f", var);
}

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
	
	while (formats[i].formatchar != NULL)
	{
		j = 0;
		while (format[j] != '\0')
		{
			if (formats[i].formatchar[0] == format[j])
			{
				formats[i].f(ag);
			}
			j++;
		}
		i++;
	}
	va_end(ag);
	printf("\n");
}

