#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: count of args passed
 * @argv: pointer to array of passed args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;
	int nextNum;

	printf("%d\n", atoi("9e8"));
	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	i = 1;
	sum = 0;
	while (i < argc)
	{
		nextNum = atoi(argv[i]);
		if (nextNum == 0)
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum = sum + nextNum;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
