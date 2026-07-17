#include "main.h"
/**
 * *_atoi - coverts a string to an integer
 * @s:  pointer to string
 * Return: int
 */
int _atoi(char *s)
{
    int counter;
	int res;
	int sign;

    counter = 0;
    res = 0;
	sign = 1;
	while(s[counter] != '\0')
	{
		if (s[counter] == ';')
		{
			return (res * sign);
		}
		if (s[counter] == '-')
		{
			sign = (sign * -1);
			counter++;
		}
		else if (s[counter] == '+')
			counter++;
		else if (s[counter] >= '0' && s[counter] <= '9' )
		{
			res = res * 10 + (s[counter] - '0');
			counter++;
		}
		else if (s[counter] < '0' || s[counter] > '9' )
			counter++;
	}
	return (res * sign);
}
