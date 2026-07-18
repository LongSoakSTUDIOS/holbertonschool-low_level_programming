/**
 * *_strcmp - comapares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: an integer less than, equal to, or greater than zero if s1 is found in s2
 */
int _strcmp(char *s1, char *s2)
{
    int value1;
	int value2;
	int counter;

    value1 = 0;
	value2 = 0;
	counter = 0;
    while (s1[counter] != '\0')
	{
		if (s1[counter] != s2[counter])
		{
			value1 = s1[counter] - '\0';
			value2 = s2[counter] - '\0';
		}
		counter++;
	}

    return (value1 - value2);
}
