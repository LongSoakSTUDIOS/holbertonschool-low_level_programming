#include <stdio.h>
#include <ctype.h>
/**
*main - runs a simple calulator
*
*Return: always 0
*/
int main(void)
{
	int response;
	int firstNum;
	int secNum;

	printf("Simple Calculator\n1) Add\n2) Subtract\n3) ");
	printf("Multiply\n4) Divide\n0) Quit\n");
	printf("Choice: ");
	scanf("%i", &response);
	printf("A: ");
	scanf("%d", &firstNum);
	printf("B: ");
	scanf("%d", &secNum);
	if (response > 5 || response < 0) /* invalid choice */
	{
		printf("Please enter a valid choice: ");
		scanf("%d", &response);
	}
	if (response == 0) /* quitting */
	{
		printf("Bye!\n");
		return (0);
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
		{
		printf("Error: division by zero\n");
		return (0);
		}
		else
			printf("Result: %.2f\n", (float)firstNum / secNum);

	}
	return (0);
}
