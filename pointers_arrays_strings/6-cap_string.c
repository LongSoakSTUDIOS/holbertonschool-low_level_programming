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

    toCap = 1;
    counter = 0;
    while (str[counter] != '\0')
    {
        if (str[counter] == ' ' || str[counter] == '\t' || str[counter] == '\n'
            || str[counter] == ',' || str[counter] == ';' || str[counter] == '.'
            || str[counter] == '!' || str[counter] == '?' || str[counter] == '"'
            || str[counter] == '(' || str[counter] == ')' || str[counter] == '{'
            || str[counter] == '}')
            {
                toCap = 1;
            }
        else if (str[counter] >= 'a' && str[counter] <= 'z' && toCap == 1)
        {
            str[counter] = str[counter] - ('a' - 'A');
            toCap = 0;
        }
        counter++;
    }
    return (str);
}
