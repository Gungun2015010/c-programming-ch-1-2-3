#include <stdio.h>
int main()
{
    int x = 2;
    int y = 3;
    printf("the value of 3*x - 6*y %d\n", 3 * x - 8 * y);
    printf("the value of 3*x / 6*y %d\n", 8 * y / 3 * x);
    printf("the value of 3*x / 6*y %d\n", 3 * x / 6 * y);
    // 8*3/3*2=24/6 will give wrong answer
    // 24/3*2
    // 16
    return 0;
}