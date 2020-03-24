// call by value - IN THIS TYPE OF FUNCTIONS VALUE
// IS PASSED DIRECTLY AT THE TIME OF CALLING ADD(10,20);

#include<stdio.h>
#include<conio.h>
int add(int y,int z)
{
 int x;
 x=y+z;
 printf("Add = %d",x);
}

int main()
{
 add(10,20);
}