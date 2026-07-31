#include <stdio.h>

/**
 * main - prints all args passed
 * @argc: count of args passed
 * @argv: pointer to array of passed args
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
