#include "main.h"
/**
 * *_atioi - coverts a string to an integer
 * @s:  pointer to string
 * Return: the pointer to dest
 */
int _atoi(char *s)
{
    int counter;
	int res;
	int sign;

    counter = 0;
    res = 0;
	sign = 1;
	if (s[counter] == '-')
	{
		sign = -1;
		counter++;
	}
	if (s[counter] == '+')
	{
		counter++;
	}
    if (s[counter] >= '0' && s[counter] <= '9' )
    {
        res = res * 10 + (s[counter] - '0');
        counter++;
    }
	if (s[counter] < '0' && s[counter] > '9' )
	{
		counter++;
	}
    return (res * sign);
}
