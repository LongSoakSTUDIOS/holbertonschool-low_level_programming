/**
 * cap_string - capitalizes all words of a string
 * @str: string to reverse
 * 
 * Return: string
 */
char *cap_string(char *str)
{
    int counter;
    int toCap;

    toCap = 0;
    counter = 0;
    while (counter != '\0')
    {
        if (str[counter] >= 'a' && str[counter] <= 'z' && toCap == 0)
        {
            str[counter] = str[counter] - ('a' - 'A');
            counter++;
            toCap = 1;
        }
        else if (str[counter] >= 'SP' && str[counter] <= '/')
        {
            counter++;
            toCap = 0;
        }
        else
            counter++;
    }
    return (str);
}
