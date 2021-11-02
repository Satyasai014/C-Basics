#include<stdio.h>
void main()
{
	int p,t,s;
	float r;
	p=10000;
	t=2;
	r=7.5;
	s=p*t*r/100;
	printf("the simple interest for the given principle amount %d and time %d and rate of interest %f is %d\n",p,t,r,s);
}
