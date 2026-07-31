#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiples two numbers
 * @argc: count of args passed
 * @argv: pointer to array of passed args
 * Return: 0
 */
int main(int argc, char **argv)
{
	int sum;
	int num1;
	int num2;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	sum = (num1 * num2);
	if (argc < 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	printf("%d\n", sum);
	return (0);
}
