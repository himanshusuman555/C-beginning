#include<conio.h>
#include<stdio.h>
int add(int y=10,int z=20)
{
 int x;
 x=y+z;
 printf("Add = %d\n",x);
}

void main()
{
 clrscr();
 printf("without paramater\n");

 add();

 printf("With parameters\n");
 add(40,60);
}
