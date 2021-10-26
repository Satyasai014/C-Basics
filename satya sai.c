#include<stdio.h>
void main()
{
	long int phy,che,eng,tot;
	long long int mat;
	phy=0;
	che=356;
	mat=24542233321;
	eng=1547;
	tot=phy+che+mat+eng;
	printf("marks in physics:%lu\n",phy);
	printf("marks in maths:%lu\n",mat);
	printf("marks in chemistry:%lu\n",che);
	printf("marks in english:%lu\n",eng);
	printf("total marks:%lu\n",tot);
}
