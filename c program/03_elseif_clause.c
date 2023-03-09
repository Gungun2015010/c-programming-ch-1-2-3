// else if clause
#include <stdio.h>
int main()
{
    int num;
    printf("enter any number\n");
    scanf("%d", &num);//the \n is not enter in the scanf function

    // leader start here
    if (num == 1)
    {
        printf("it is number 1\n");
    }
    else if (num == 2)
    {
        printf("it is number 2\n");
    }
    else if (num == 3)
    {
        printf("it is number 3\n");
    }
    else
    {
        printf("not execute above tasks\n");
    }
    // leader end here
    return 0;
}