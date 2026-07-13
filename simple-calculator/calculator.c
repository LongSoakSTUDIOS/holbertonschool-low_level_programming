#include <stdio.h>
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
	
	response = 0;
	responded = 0;
	firstNum = 0;
	secNum = 0;
	sum = 0;
	printf("Simple Calculator \n 1) Add \n 2) Subtract \n 3) Multiply \n 4) Divide \n 0) Quit \n");
	while (responded == 0)
	{
		printf("Choice: ");
		scanf("%d", &response);
		if (response > 5 || response < 0) /*handling invalid choices*/
		{
			printf("Please enter a valid choice: ");
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
			printf("Result: %i\n", sum);
		}
	}
	return (0);
}
