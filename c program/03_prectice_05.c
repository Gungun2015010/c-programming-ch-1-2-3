#include<stdio.h>
int main(){
    //122 se 97=contain lowercase latter
     char character;
    printf("enter character\n");
    scanf("%c",&character);
    if(character<122 && character>97){
        printf("%c it is lowercase\n");
    }
    else{
        printf("%c it is uercase\n");
    }
    return 0;
}