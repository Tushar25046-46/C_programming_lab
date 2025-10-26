#include<stdio.h>
int main(){
	float as,ys,fos;
	printf("enter applied stress:");
	scanf("%f",&as);
	printf("enter yield strength:");
	scanf("%f",&ys);
	fos=ys/as;
	if(fos>=2){
		printf("safe design");
	}
	else if(fos>=1.5 && fos<2){
		printf("acceptable with monitoring");
	}
	else if(fos<1.5){
		printf("danger,redesign needed");	}
    
	return 0;
	
}