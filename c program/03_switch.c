//switch statement have defaulted print system who print the values after the user give him input
//when any statement is true then it prints all the below statement
#include <stdio.h>
int main()
{
    
    int feedback;
    printf("enter any number to 1-5\n");
    scanf("%d", &feedback);
    switch (feedback)
    {
    case 1:
        printf("the number is 1\n");
        break;//used tu print only one value ,were it is put
    case 2:
        printf("the number is 2\n");
        break;
    case 3:
        printf("the number is 3\n");
        break;
    case 4:
        printf("the number is 4\n");
        break;
    case 5:
        printf("the number is 5\n");
        break;
    default:
        printf("the default value\n");
    }



    return 0;
}
