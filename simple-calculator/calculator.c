#include <stdio.h>
/**
*main - runs a simple calulator capable of adding, subtracting, multiplying and dividing
*
*Returns: always 0
*/
int main(void)
{
    int response;
    int responded; /*0 for false, 1 for true*/

    response = 0;
    responded = 0;
    printf("Simple Calculator \n 1) Add \n 2) Subtract \n 3) Multiply \n 4) Divide \n 0) Quit \n");
    while (responded == 0)
    {
        printf("Choice: ");
        scanf("%d", &response);
        if(response > 5 || response < 0)
        {
            printf("Please enter a valid choice: ");
            responded = 0;

        }    
        if (response == 0)
        {
            printf("Bye!\n");
            responded = 1;
            return(0);
        }    
    }
    return (0);
}