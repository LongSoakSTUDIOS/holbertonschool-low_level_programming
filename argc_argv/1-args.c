#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: count of args passed
 * @argv: pointer to array of passed args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%i\n", argc);
	return (0);
}
