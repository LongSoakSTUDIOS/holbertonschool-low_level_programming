/**
 * cap_string - capitalizes all words of a string
 * @str: string to reverse
 * 
 * Return: string
 */
char *cap_string(char *str)
{
    int counter;

    counter = 0;
    while (counter != '\0')
    {
        if (str[counter] >= 'a' && str[counter] <= 'z')
        {
            str[counter] = str[counter] - ('a' - 'A');
            counter++;
        }
        else
            counter++;
    }       
}
