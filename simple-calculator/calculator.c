#include <stdio.h>
#include <ctype.h>
/**
*main - runs a simple calulator
*
*Returns: always 0
*/
int main(void)
{
	int response;
	int responded; /*0 for false, 1 for true*/
	int firstNum;
	int secNum;
	int sum;
	
	responded = 0;
	firstNum = 0;
	secNum = 0;
	sum = 0;
	printf("Simple Calculator \n 1) Add \n 2) Subtract \n 3) Multiply \n 4) Divide \n 0) Quit \n");
	printf("Choice: ");
	scanf("%d", &response);
	while (responded == 0)
	{
		if (response > 5 || response < 0) /* invalid choice */
		{
			printf("Please enter a valid choice: ");
			scanf("%d", &response);
			responded = 0;
		}
		if (!isdigit(response))
		{
			printf("Please enter a valid choice: ");
			scanf("%d", &response);
			responded = 0;
		}
		if (response == 0) /* quitting */
		{
			printf("Bye!\n");
			responded = 1;
			return (0);
		}
		if (response == 1) /* addition*/
		{
			responded = 1;
			printf("A: ");
			scanf("%i", &firstNum);
			printf("B: ");
			scanf("%i", &secNum);
			sum = firstNum + secNum;
			printf("Result: %d\n", sum);
		}
		if (response == 2) /* subtraction */
		{
			responded = 1;
			printf("A: ");
			scanf("%i", &firstNum);
			printf("B: ");
			scanf("%i", &secNum);
			sum = firstNum - secNum;
			printf("Result: %d\n", sum);
		}
		if (response == 3) /* multiplcation */
		{
			responded = 1;
			printf("A: ");
			scanf("%i", &firstNum);
			printf("B: ");
			scanf("%i", &secNum);
			sum = firstNum * secNum;
			printf("Result: %d\n", sum);
		}
		if (response == 4) /* division */
		{
			responded = 1;
			printf("A: ");
			scanf("%d", &firstNum);
			printf("B: ");
			scanf("%d", &secNum);
			if (secNum == 0)
			{
				printf("Error: division by zero\n");
				return (0);
			}
			else
			{
				sum = firstNum / secNum;
				printf("Result: %d\n", sum);
			}
		}
	}
	return (0);
}
