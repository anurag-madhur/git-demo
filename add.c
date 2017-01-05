#include<stdio.h>
int add(int x,int y, int z)
{
	int result;
	result = x+y+z;
	return result;	

}

int sub(int x,int y)
{
	int z;
	z=x-y;
	return z;
}
void swap(int x,int y)
{
int z;
z=x;
x=y;
y=z;
printf("value of a is %d and value of b is %d",x,y);

}
void main()
{
	int a,b,c,result;
	scanf("%d%d%d",&a,&b, &c);
	
	result=add(a,b,c);
	printf("Sum of the two no.s is %d",result);
	
	result=sub(a,b);
	printf("Sum of the two no.s is %d",c);
	printf("subtraction of the no.s is %d"result);

	printf("enter the value of a and b");
	scanf("%d",&a,&b);
	swap(a,b);

}
