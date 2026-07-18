/**
 * reverse_array - reverses the content of an array of ints
 * @a: array to resevrse
 * @n: number of elements of the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
    int counter;
    int tmp;
    int end;

    counter = 0;
    end = n - 1;
    tmp = 0;
    while (counter < end) 
    {
        tmp = a[counter];
        a[counter] = a[end];
        a[end] = tmp;
        counter++;
        end--;
    }
}
