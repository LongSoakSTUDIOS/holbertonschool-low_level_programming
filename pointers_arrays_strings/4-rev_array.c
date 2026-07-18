/**
 * print_rev - reverses the content of an array of ints
 * @a: array to resevrse
 * @n: number of elements of the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
    int counter;
    int tmp;

    counter = 0;
    tmp = 1;
    while (counter <= n) 
    {
        a[counter] = a[n-tmp];
        tmp++;
        counter++;
    }
}
