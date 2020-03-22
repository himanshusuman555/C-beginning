#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50],b[50],c[100],n,k,i;
 clrscr();
 printf("Enter size of array a and b:\n");
 scanf("%d",&n);

 printf("Enter values into array a1\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  c[i]=a[i];
 }

 k=i;
 printf("Enter values into second array\n");
 for(i=0;i<n;i++)
  {
    scanf("%d",&b[i]);
    c[k]=b[i];
    k++;
  }
 printf("After merging into third array\n");
 for(i=0;i<k;i++)
  {
   printf("%d",c[i]);
  }
}



