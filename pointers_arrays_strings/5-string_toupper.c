/**
 * string_toupper - reverses the content of an array of ints
 * @str: string to reverse
 * Return: string
 */
char *string_toupper(char *str)
{
    int counter;

    counter = 0;
    while (str[counter] != '\0')
    {
        if (str[counter] >= 'a' && str[counter <= 'z'])
        {
            str[counter] = str[counter] - ('a' - 'A');
            counter++;
        }
        else
            counter++;
    }
    return (str);
}
