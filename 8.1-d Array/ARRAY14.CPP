#include<stdio.h>
#include<conio.h>
void main()
{
 int roll[10]={14,52,63,45,65,84,75,96,51,62};
 clrscr();
 int n,i,m=0;
 printf("\nRoll numbers are:\n");
 for(i=0;i<10;i++)
 {
   printf("%d ",roll[i]);
 }
 printf("\nEnter your rollno to search\n");
 scanf("%d",&n);

 for(i=0;i<10;i++)
 {
  if(n==roll[i])
  {
   printf("roll number found at position : %d",i+1);
   m=1;
   break;
  }
 }
  if(m==0)
  {
   printf("not found");
  }

}
