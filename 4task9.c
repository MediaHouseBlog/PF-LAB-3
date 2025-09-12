#include <stdio.h>

int main()
{
    int attendance;
    int internalMarks;
    printf("What is your attendance in %% ");
    scanf("%d",&attendance);
    printf("What are your internal Marks ");
    scanf("%d",&internalMarks);
    if(attendance >= 75 && internalMarks>= 40)
    {
        printf("You can appear in Exams. \n");
    }
    else
    {
        printf("You can not appear in exams. \n");
    }
}
