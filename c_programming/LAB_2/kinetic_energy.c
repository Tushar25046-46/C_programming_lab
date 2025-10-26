
#include <stdio.h>
int main(){
    int m,v,ke;
    printf("enter mass:");
    scanf("%d",&m);
    printf("enter velocity:");
    scanf("%d",&v);
    ke=(m*v*v)/2;
    printf("kinetic energy: %d",ke);
    return 0;
}
