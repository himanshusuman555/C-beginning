//Call by refernce - address is passed while passing arguments
#include<stdio.h>
#include<conio.h>
int add(int *h,int *w)
{
 int area;
 area=*h * *w;
 printf("Area of rectangle= %d",area);
}

void main()
{
 int a,b;
 a=5,b=6;
 add(&a,&b);
}
