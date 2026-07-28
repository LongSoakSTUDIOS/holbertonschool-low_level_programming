#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - does a calculation
 * @argc: count of command line args
 * @argv: command line args
 *
 * Return: result of operation
 */
int main(int argc, char **argv)
{
	int num1;
	int num2;
	char *op;
	int (*func)(int, int);
	int sum;

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];
	func = get_op_func(op);
	sum = func(num1, num2);
	printf("%d\n", sum);
	return (0);
}

