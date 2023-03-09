#include<stdio.h>
int main(){
    int maths,hindi,english;
    float totle;
    printf("enter maths marks\n");
    scanf("%d",&maths);
     
    printf("enter hindi marks\n");
    scanf("%d",&hindi);

    printf("enter english marks\n");
    scanf("%d",&english); 

totle = (maths+hindi+english)/3;

    if((totle<40) || maths<33 || hindi<33 || english<33){
        printf("the student is fail %f\n",totle);
    }
    else{
       printf("the student is pass %f\n",totle);
    }
    return 0;
}