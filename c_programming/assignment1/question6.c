#include <stdio.h>
int main(){
    int n;
    printf("enter a num:");
    scanf("%d",&n);
    if(n%5==0 && n%11==0){
        printf("number is divisible by both 5 and 11");
    }
    else{
        printf("not divisible by both 5 and 11");
    }
    return 0;
}