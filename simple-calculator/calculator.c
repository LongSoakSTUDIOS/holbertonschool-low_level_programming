#include <stdio.h>
#include <ctype.h>
/**
* main - runs a simple calulator
*
* Return: always 0
*/
int main(void)
{
	int response;
	int firstNum;
	int secNum;
	int is_running;
	int c;
	int valid_input;

	is_running = 1;
	while(is_running == 1)
	{
		response = 0;
		valid_input = 0;
		printf("Simple Calculator\n1) Add\n2) Subtract\n3) Multiply\n4) Divide\n0) Quit\n");
		while (valid_input == 0)
		{
			printf("Choice: ");
			if (scanf("%i", &response) != 1 || response > 4 || response < 0  )
			{
				printf("Please enter a valid choice: \n");
				while ((c = getchar()) != '\n' && c != EOF)
				{
					;
				}
			}
			else
				valid_input = 1;
		}
		if (response == 0)
		{
			printf("Bye!\n");
			return (0);
		}
		valid_input = 0;
		while (valid_input == 0)
		{
			printf("A: ");
			if (scanf("%i", &firstNum) != 1)
			{
				printf("Please enter a valid number: \n");
				while ((c = getchar()) != '\n' && c != EOF)
				{
					;
				}
			}
			else
				valid_input = 1;
		}
		valid_input = 0;
		while (valid_input == 0)
		{
		printf("B: ");
			if (scanf("%i", &secNum) != 1)
			{
				printf("Please enter a valid number: \n");
				while ((c = getchar()) != '\n' && c != EOF)
				{
					;
				}
			}
			else
				valid_input = 1;
		}
		if (response == 1)
			printf("Result: %d\n", firstNum + secNum);
		if (response == 2)
			printf("Result: %d\n", firstNum - secNum);
		if (response == 3)
			printf("Result: %d\n", firstNum * secNum);
		if (response == 4)
		{
			if (secNum == 0)
				printf("Error: division by zero\n");
			else
				printf("Result: %.2f\n", (float)firstNum / secNum);
		}
	}
	return (0);
}
