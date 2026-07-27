#include <stdio.h>
#include "function_pointers.h"
/**
* print_name - prints a name
* @name: pointer to char
* @f: pointer to function
*
* Return: null
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

