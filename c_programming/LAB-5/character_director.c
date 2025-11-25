#include<stdio.h>
int main()
{
	char input;
	printf("enter the character ");
	scanf("%c",&input);
	if (input>='a' && input<='z')
		printf("%c is a lower case alphabet",input);
	else if (input>='A' && input<='Z')
		printf("%c is an upper case alphabet");
	else if(input>='0' && input<='9')
		printf("%c is a digit",input);
	else
	   printf("%c is a special character");
	return 0;	
}