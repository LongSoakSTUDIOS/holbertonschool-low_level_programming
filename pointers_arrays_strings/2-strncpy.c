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

    counter = 0;
    while(counter < n && src[counter] != '\0')
    {
        dest[counter] = src[counter];
        counter++;
    }
    while (counter < n)
    {
        dest[counter] == '\0';
        counter++;
    }
    return (dest);
}
