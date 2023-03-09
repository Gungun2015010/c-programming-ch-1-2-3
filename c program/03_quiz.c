#include <stdio.h>
int main()
{
    int marks;
    printf("enter the value to determain the grads of students\n");
    scanf("%d", &marks);
    if (marks >= 90 && marks<=100)
    {
        printf("the student grade is A\n");
    }
    else if (marks >= 80 && marks<=90)
    {
        printf("the student grade is B\n");
    }
    else if (marks >= 70 && marks<=80)
    {
        printf("the student grade is C\n");
    }
    else if (marks >= 60 && marks<=70)
    {
        printf("the student grade is D\n");
    }
    else if (marks >= 35 && marks<=60)
    {
        printf("student is only pass\n");
    }
    else
    {
        printf("the student is fail\n");
    }
    return 0;
}