#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - 
 * @s: string
 *
 * Return: 99 on fail, operator on success
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
    		};
	int i;

	i = 0;
	while (i < 5)
	{
		if (((char *)ops[i][0])[0] == s)
			return (ops[i][1]);
		i++;
	}
	printf("Error\n");
	exit (99);
}

