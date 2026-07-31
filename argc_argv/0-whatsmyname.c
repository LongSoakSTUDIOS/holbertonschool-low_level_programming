#include <stdio.h>

/**
 * main - prints the name of the file
 * @argc: count of args pass
 * @argv: pointer to array of passes args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[0]);
		i++;
	}
	return (0);
}
