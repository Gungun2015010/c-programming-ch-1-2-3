#include <stdio.h>
int main()
{
    int age;
    int VIP_pass = 1;
    printf("enter the age to determine who can drive or not\n");
    scanf("%d", &age);
    if (age <= 70 && age >= 18 || VIP_pass == 1)
    {
        printf(" the age of %d person was able to drive\n", age);
    }
    else
    {
        printf(" the age of %d person is not able to drive\n", age);
    }

    return 0;
}