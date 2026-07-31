#ifndef VAR_FUNC_H
#define	VAR_FUNC_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
/**
 * struct op - holds character and coorsponding function
 * @formatchar: string
 * @f: function
 */
typedef struct op
{
	char *formatchar;
	void (*f)(va_list);

}	formats_t;
void printchar(va_list var);
void printint(va_list var);
void printfloat(va_list var);
void printstring(va_list var);
void print_all(const char * const format, ...);
#endif
