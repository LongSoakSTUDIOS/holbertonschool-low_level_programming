#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to a char
 *
 * Return: null
 */
void rev_string(char *s)
{
    int counter;
    

	counter = 0;
	while (s[counter] != '\0')
    {
		counter++;
    }
	while (counter >= 0)
	{
		s[counter] = *s;
		counter--;
	}
}