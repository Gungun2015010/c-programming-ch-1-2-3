// arithmetic instruction
#include <stdio.h>
#include <math.h> //to present the power
int main()
{
    int a = 4, b = 8;

    printf("the value of a + b is %d\n", a + b);
    printf("the value of a - b is %d\n", a - b);
    printf("the value of a * b is %d\n", a * b);
    printf("the value of a / b is %d\n", a / b);

    int z;
    z = b * a; // legal
    // b * a = z ; illegale
    printf("the value of z is %d\n", z);
    printf("-5 when divided by 2 leaves a remainder of %d\n", -5 % 2);
    printf("5 when divided by -2 leaves a remainder of %d\n", 5 % -2);
    printf("-5 when divided by -2 leaves a remainder of %d\n", -5 % -2);
    printf("5 divided by 2 leaves a remainder of %d\n", 5 % 2);
    // no operator is assumed to be present
    // printf("the value of 4*5 is %d\n",(4)(5)); invelid
    printf("the value of 4*5 is %d\n", (4) * (5)); // valide
    printf("the value of 4 ^ 5 is %d\n", 4 ^ 5);   // bitwise XOR operator
    printf("the value of 4 to the power 5 is %f\n", pow(4, 5));
    int k = 3.0 / 9;
    float p = 3.0 / 9;
    printf("the value of k when the float value input in int %d\n", k);
    printf("the valid type to print k's value %f\n", p);
    return 0;
}
