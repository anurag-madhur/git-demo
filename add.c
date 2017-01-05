#include<stdio.h>

int add(int x,int y)
{
	int z;
	z=x+y;
	return z;	

}

void main()
{
	int a,b,c,result;
	scanf("%d%d",&a,&b);
	
	c=add(a,b);
	printf("Sum of the two no.s is %d",c);
	

}
