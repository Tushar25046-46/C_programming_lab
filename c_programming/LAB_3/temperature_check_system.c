#include <stdio.h>
int main(){
    int t;
    printf("enter temperature of machine (in celsius):");
    scanf("%d",&t);
    
    if(t>60 && t<=80){
        printf("machine temp is in safe range ");
    }
    else{
        printf("danger!!!");
    }
    return 0;

}