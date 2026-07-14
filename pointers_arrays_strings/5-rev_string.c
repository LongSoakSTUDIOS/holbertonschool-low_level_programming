#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to a char
 *
 * Return: null
 */
void rev_string(char *s)
{
    int start;
	int end;
	char temp;
    
	start = 0;
	end = 0;
	while (s[end] != '\0')
    {
		end++; //length
    }
	while (end < start)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}