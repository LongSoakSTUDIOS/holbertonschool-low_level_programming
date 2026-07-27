/**
* int_index - searches for an integer
* @array: pointer to array
* @size: size of array
* @cmp: pointer to function to compare values
*
* Return: index of first 0 return from cmp, -1 on fail
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;

	if (size <= 0)
		return (-1);
	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) == 0)
		{
			i++;
		}
		else
			return (i);
	}
	return (-1);
}

