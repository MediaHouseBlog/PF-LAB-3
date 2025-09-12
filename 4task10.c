#include <stdio.h>

int main()
{
    float balance;
    int wAmount;
    printf("Enter the balance ");
    scanf("&f",&balance);
    printf("Enter the withdrawl amount ");
    scanf("%d",&wAmount);
    if(balance > wAmount)
    {
        if( wAmount%500 ==0 )
        {
            printf("You can make the withdrawl.");
        }
        else
        {
            printf("You can not withdraw this amount. \n");
        }
    }
    else
    {
        printf("Not enough balance to make withdrawl.\n");
    }
}
