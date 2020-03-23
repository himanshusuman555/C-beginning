#include<stdio.h>
#include<conio.h>
void main()
{
 int a1[2][2]={{5,5},{9,9}};
 int i,j;
 clrscr();

 printf("Array is given below\n");
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
   {
    printf(" %d",a1[i][j]);
   }
   printf("\n");
 }
 printf("Transpose of array is given below\n");
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
   {
    printf(" %d",a1[j][i]);
   }
   printf("\n");
 }

}

