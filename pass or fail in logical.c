#include<stdio.h>
void main()
{
	int n1,n2,n3,n4,n5;
	printf("enter your 5 subjects marks");
	scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
	if(n1>=35 && n2>=35 && n3>=35 && n4>=35 && n5>=35)
	{
		printf("pass");
	}
	else
	{
		printf("fail");
	}
}
