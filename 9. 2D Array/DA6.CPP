#include<stdio.h>
#include<conio.h>
void main()
{
 int a1[2][2]={{5,6},{7,8}};
 int a2[2][2]={{4,3},{2,1}};
 int a3[2][2];
 int i,j;
 clrscr();

 printf("First array is given below\n");
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
   {
    printf(" %d",a1[i][j]);
   }
   printf("\n");
 }
 printf("second array is given below\n");
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
   {
    printf(" %d",a2[i][j]);
   }
   printf("\n");
 }

 printf("Addition of first and second array is given below\n");
 for(i=0;i<2;i++)
  {
   for(j=0;j<2;j++)
    {
     a3[i][j]=a1[i][j]-a2[i][j];
     printf(" %d",a3[i][j]);
    }
   printf("\n");
  }
}

