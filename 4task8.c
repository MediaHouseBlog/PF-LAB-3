#include <stdio.h>

int main()
{
    int temp;
    printf("What is the temperature in Degree Celsius? ");
    scanf("%d",&temp);
    if(temp > 30)
    {
      printf("Hot Day");  
    }
    else
    {
        printf("Pleasant Day");
    }
}
