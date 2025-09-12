#include <stdio.h>

int main()
{
    int passWord;
    printf("Enter The Password ");
    scanf("%d",&passWord);
    if(passWord == 1234)
    {
        printf("Access Granted");
    }
    else
    {
        printf("Access Denied");
    }
}
