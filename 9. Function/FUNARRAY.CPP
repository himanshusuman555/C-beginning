//Passing array to funcations
#include<stdio.h>
#include<conio.h>
int array(int a[5])
{
  printf("Element is given below\n");
  for(int i=0;i<5;i++)
  {
   printf(" %d ",a[i]);
  }
}


int main()
{
 clrscr();
 int b[5];
 printf("Enter 5 integer value one by one\n");
 for(int i=0;i<5;i++)
 {
  scanf("%d", &b[i]);
 }
 array(b);
}

