#include<stdio.h>
void main()
{
	int n;
	printf("enter your rankfor the pridiction");
	scanf("%d",&n);
	if(n <= 5)
	{
		printf("jntuk\nAEC\nPEC\nKIET",n);
	}
	else if(n <=1000)
	{
		printf("PEC\nAEC\nKIET",n);
	}
	else if(n >= 1000)
	{
		printf("PEC\nKIET",n);
	}
	
}
	
