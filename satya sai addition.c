#include <stdio.h>
void main()
{
	int a,b,s,d,p,e,r,z;
	a=10;
	b=2;
	
	s = a+b;
	d = a-b;
	p = a*b;
	e = a/b;
	r = a%b;
	z =s+d+p+e+r;
	printf("sum of %d and %d is %d\n",a,b,s);
	printf("difference between %d and %d is %d\n",a,b,d);
	printf("product of %d and %d is %d\n",a,b,p);
	printf("division for %d and %d is %d\n",a,b,e);
	printf("remainder for %d and %d is %d\n",a,b,r);
	printf("sum of all arthemetic operations is %d\n",z);
}
