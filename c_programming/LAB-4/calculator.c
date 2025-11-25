#include<stdio.h>
int main()
{
	float x,y,result;
	int optr;
	printf("'enter the numbers x and y ");
	scanf("%f %f",&x,&y);
	printf("enter operation 1(+) or 2(-) or 3(/) or 4(*)");
	scanf("%d",&optr);
	switch(optr)
	{
		case 1:
		result=x+y;
		printf("result=%f",result);
		break;
		case 2:
	    result=x-y;
	    printf("result=%f",result);
	    break;
	    case 3:
	    result=x/y;
	    if (y==0)
	    {
	    	printf("y=0 is invalid");
		}
		else
		{
	    printf("result=%f",result);
		}
	    break;
	    case 4:
	    result=x*y;
	    printf("result=%f",result);
	    break;
	    default:
	    printf("invalid input");
	}
	return 0;
}
	
	