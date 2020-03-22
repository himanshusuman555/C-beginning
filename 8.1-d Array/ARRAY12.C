#include<stdio.h>
#include<conio.h>
void main()
{
 int a1[50],a2[50],size1,size2,i,k,merge[100];
 printf("Enter array1 size: ");
 scanf("%d",&size1);        //4

 printf("Enter array1 Elements\n");
 for(i=0;i<size1;i++)         //till 0-3
  {
   scanf("%d",&a1[i]);
   merge[i]=a1[i];             //a1[3]
  }

  k=i;                          //3
  printf("\nEnter array 2 size:");
  scanf("%d",&size2);             //4

  printf("Enter Array2 Elements:");
  for(i=0;i<size2;i++)
   {
    scanf("%d",&a2[i]);
    merge[k]=a2[i];
    k++;
   }

 printf("\n The new array after merging is:\n");
 for(i=0;i<k;i++)
 {
  printf("%d  ",merge[i]);
 }
 getch();
}

