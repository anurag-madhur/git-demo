#include<stdio.h>
#include<conio.h>
void swap(int a, int b)
void main()
{
int a,b;
printf("enter the value of a and b");
scanf("%d",&a,&b);
swap(a,b);
}
void swap(int x,int y)
{
int z;
z=x;
x=y;
y=z;
printf("value of a is %d and value of b is %d",x,y);
}
