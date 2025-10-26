#include <stdio.h>
int main(){
    int mass,accn,force;
    printf("enter mass:");
    scanf("%d",&mass);
    printf("enter accn:");
    scanf("%d",&accn);
    force=mass*accn;
    printf("force: %d",force);
    return 0;


}