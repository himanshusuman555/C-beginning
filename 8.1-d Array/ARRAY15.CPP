#include<stdio.h>
#include<conio.h>
void main()
{
  int a[50],i,n,x,flag=0,first,last,mid;
  clrscr();
  printf("Enter size of array\n");
  scanf("%d",&n);

  printf("Enter %d elements into array list\n",n);
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }

  printf("Enter element to search\n");
  scanf("%d",&x);

  first=0;
  last=n-1;

  while(first<=last)
  {
	 mid=(first+last)/2;

	   if(x==a[mid])
	 {
	  flag=1;
	  break;
	 }
	  else
	   if(x>a[mid])
	   first=mid+1;
	   else
	   last=mid-1;
   }

 if(flag==1)
  {
   printf("\nNumber is found at position %d",mid+1);
  }
 else
  {
   printf("\nNumber not found");
  }
}

