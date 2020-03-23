//area of circle   with argument no return
#include<stdio.h>
#include<conio.h>
void area(float radius)
{
  float area;
  area=3.14*radius*radius;
  printf("area of circle =%f",area);
}

int main()
{
 float r;
 printf("Enter radious of circle=");
 scanf("%f",&r);
 area(r);
}

