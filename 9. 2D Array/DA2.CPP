#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50][50],row,col;
 int i,j;
 printf("Enter row\n");
 scanf("%d",&row);

 printf("Enter column\n");
 scanf("%d",&col);

 printf("Now Enter %d integer values one by one\n",row*col);
 for(i=0;i<row;i++)
  {
   for(j=0;j<col;j++)
    {
     scanf("%d",&a[i][j]);
    }
  }

  printf("Elements of array given below\n");
  for(i=0;i<row;i++)
   {
    for(j=0;j<col;j++)
     {
      printf("%d",a[i][j]);
     }
     printf("\n");
   }
}


