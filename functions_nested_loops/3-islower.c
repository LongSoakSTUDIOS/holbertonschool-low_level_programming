#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
*print_alphabet - checks for lowercase character
*@c: the char to check 
*
*Return: returns 1 if lowercase, 0 if not
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

