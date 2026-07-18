/**
 * *_strncpy - concatenates two strings
 * @dest: pointer to string
 * @src: pointer to string
 * @int: amount of bytes avaliable
 *
 * Return: pointer to string
 */
char *_strncpy(char *dest, char *src, int n)
{
    int counter;
    int length;

    counter = 0;
    length = 0;
    while (src[counter] != '\0')
    {
        counter++;
    }
    length = counter;
    counter = 0;
    while (counter <= length)
    {
        if (counter > length && counter <= n)
        { 
            dest[counter] = '\0';
            counter++;
        }
        dest[counter] = src[counter];
        counter++;
    }
    return (dest);
}
