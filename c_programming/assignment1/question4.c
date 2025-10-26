#include<stdio.h>
int main()
{
	float U,U1,U2,U3,B;
	printf("enter total unit consumed ");
	scanf("%f",&U);
	if (U<100)
	{
        B=U*1.5;
		printf("Total Bill=%f",B);
	}
	else if (U>=101 & 200>=U)
	{
		U1=U-100;
		B=150+U1*2;
		printf("Total Bill=%f",B);
	}
	else if (U>=201 & 300>=U)
	{
		U2=U-200;
		B=350+U2*3;
		printf("Total Bill=%f",B);
	}
	else if (U>300)
	{
		U3=U-300;
		B=650+U3*5;
		printf("Total Bill=%f",B);
	}
	return 0;
}
	