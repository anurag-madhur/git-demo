#include<stdio.h>

int add(int x,int y, int z)
{
	int result;
	result = x+y+z;
	return result;	

}

void main()
{
	int a,b,c,result;
	scanf("%d%d%d",&a,&b, &c);
	
	result=add(a,b,c);
	printf("Sum of the two no.s is %d",result);
	

}
