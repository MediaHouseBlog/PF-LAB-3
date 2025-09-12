#include <stdio.h>
int main()
{
    int userAGe;
    int salary;
    printf("What is your age? ");
    scanf("%d",userAge);
    printf("What is your salary? ");
    scanf("%d",&salary);

    if(userAge >= 25 && salary >= 40000)
    {
        printf("Loan Is Approved. \n");
    }
    else
    {
        printf("Loan Is Rejected. \n");
    }
}
