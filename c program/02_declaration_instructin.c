// declaration instruction
/*#include<stdio.h>
int main(){
    int a=4,b,c;
    b=c=a;
printf("the value of a is %d\n",a);
printf("the value of b is %d\n",b);
printf("the value of c is %d\n",c);
return 0;
}*/

#include <stdio.h>
int main()
{
    float a = 1.1;
    float b = a + 4.5;
    printf("the value of b is %.10000f\n", a); //%.3f is used to remove the decimal(after. numbers)
    return 0;
}