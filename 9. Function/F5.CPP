// Addition subtraction multiplication division
#include<stdio.h>
#include<conio.h>
void area(int h,int w)
{
  int ar;
  ar=h*w;
  printf("Area of rectangle=%d ",ar);
}

int main()
{
  int h,w;
  clrscr();
  printf("Enter height\n");
  scanf("%d",&h);
  printf("Enter weidth\n");
  scanf("%d",&w);
  area(h,w);
}