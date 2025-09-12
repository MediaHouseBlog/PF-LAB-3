#include <stdio.h>

int main(void)
{
    int userAge;
    printf("What is your age");
    scanf("%d",userAge);
    if(userAge >= 18)
    {
        printf("Eligible to Vote");
    }
    else
    {
        printf("Not Eligible"):
    }
}
