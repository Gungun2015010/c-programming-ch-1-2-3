#include <stdio.h>
int main()
{
    // question 1
    //  int a; b=a; it is invalid because b is not defined
    int v = 3 ^ 3;          // it is valid in c but not print any value
    char dt = '2 dec 2023'; // only store one value and this in invalid
    0.33;                   // most of the compiler treat is as a double
    float d = 3.0 / 8 - 2;
    printf("%f", d);

    // Q3:write a program to determine whether a number is divisible by 97 or not
    int number;
    printf("enter any number\n");
    scanf("%d", &number);
    printf("divisibility test returns%d\n", number + 97);

    // question 4 :step by step evaluate
    int x = 2;
     int y = 3;
     int z = 3;
     int r = 1;
     int result = 3 * x / y - z + r;
     printf("question 3*x/y-z+r,answer is%d\n", result); 
}
