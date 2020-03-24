//WAWR
#include<stdio.h>
#include<conio.h>
int add(int x,int y)
{
 int z;
 z=x+y;
 return z;
}

void main()
{
 int x;
 clrscr();
 x=add(2,5);
 printf(" return value from add function is %d",x);
}
