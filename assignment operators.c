#include<stdio.h>
void main()
{
	int x,y;
	printf("enter any number for x\n");
	scanf("%d",&x);
	printf("enter any number for y");
	scanf("%d",&y);
	x += y;
	printf("%d %d",x,y);
}
