/**
 * leet - encodes a string into 1337
 * @str: string to encode
 * 
 * Return: string
 */
char *leet(char *str)
{
    int counter;
    int i;
    int matrix[5][3] = 
    {
        {'a', 'A', '4'}, 
        {'e', 'E', '3'}, 
        {'o', 'O', '0'}, 
        {'t', 'T', '7'}, 
        {'l', 'L', '1'}
    };

    counter = 0;
    i = 0;
    while (str[counter] != '\0')
    {
        i = 0;
        while (i < 5)
        {
            if (str[counter] == matrix[i][0] || str[counter] == matrix[i][1])
            {
                str[counter] = matrix[i][2];
            }
            i++;
        }
        counter++;
    }
    return (str);
}