#include <stdio.h>

int main(void)
{
    float num1;
    float num2;
    printf("Enter the value of number1 ");
    scanf("%f",&num1);
    printf("Enter the value of number2 ");
    scanf("%f",&num2);

    char choice[20];
    printf("Enter Choice Put of Addition / Subtraction / Multiplication / Division");
    scanf("%s",choice);

    if(strcmp(choice,"Addition")==0)
    {
        printf("Addition = %f",num1+num2);
    }
    else if(strcmp(choice,"Subtraction")==0)
    {
        printf("Subtraction = %f",num1-num2);
    }
    else if(strcmp(choice,"Multiplication")==0)
    {
        printf("Multiplication = %f",num1*num2);
    }
    else if(strcmp(choice,"Division")==0)
    {
        printf("Division = %f",num1/num2);
    }
    else
    {
        printf("Enter correct spelling of choice");
    }
}
