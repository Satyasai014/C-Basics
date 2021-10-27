#include<stdio.h>
#include<limits.h>
void main()
{
	printf("\nshort int:\nsigned: %hd to %hd\n",SHRT_MIN,SHRT_MAX);
	printf("unsigned:%d to %hu",0,USHRT_MAX);
	printf("\nint :\nsigned:%i to %i\n",INT_MIN,INT_MAX);
	printf("unsigned:%i to %u",0,UINT_MAX);
	printf("\nlong int :\nsigned :%ld to %ld\n",LONG_MIN,LONG_MAX);
	printf("unsigned:%i to %lu\n",0,ULONG_MAX);
	printf("\nlong long int :\nsigned :%lld to %lld\n",LONG_LONG_MIN,LONG_LONG_MAX);
	printf("unsigned :%lld to %llu\n",0,ULONG_LONG_MAX);
}
