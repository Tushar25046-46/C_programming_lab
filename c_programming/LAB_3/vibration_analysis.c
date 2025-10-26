    #include<stdio.h>
    int main(){
	
		float va,fq;
	    printf("enter vibrational amplitude:");
	    scanf("%f",&va);
	    printf("enter frequency:");
	    scanf("%f",&fq);
	    if (va>0.5 && fq>=20 && fq<=50)
                {
	    	printf("high risk");
		}
		else if (va>0.5 || fq > 60)
                {
			printf("medium risk");
		}
		else{
			printf("low risk");
		}
		return 0;
                }
