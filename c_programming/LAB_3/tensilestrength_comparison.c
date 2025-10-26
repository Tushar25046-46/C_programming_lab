#include <stdio.h>
int main(){
    int ts1,ts2;
    printf("enter tensile strength 1:");
    scanf("%d",&ts1);
    printf("enter tensile strength 2:");
    scanf("%d",&ts2);

    if (ts1>ts2){
        printf("tensile strength 1 is greater");
    }
    else if(ts1<ts2){
        printf("tensile strength 2 is greater");
    }
    else{
        printf("both are equal");
    }
    return 0;


}