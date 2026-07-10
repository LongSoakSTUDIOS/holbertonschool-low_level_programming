#include "main.h"
/**
*_isalpha - checks if variable is a character
*@c: the variable to check
*
*returns: 1 if c is a letter, 0 otherwise
*/
int _isalpha(int c)
{
	if(c >= 'a' && c <= 'z')
	{
		if(c >= 'A' && c <= 'Z')
		{
			return(1);
		}
		return (1);
	}
	return (0);
}
