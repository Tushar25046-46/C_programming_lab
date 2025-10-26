#include <stdio.h>
int main(){
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    if (a>0){
        printf("the number is positive");
    }
    if (a<0){
        printf("the number is negative");
    }
    if(a==0){
        printf("the number is 0");

    }
    return 0;


}
