#include<iostream.h>
#include<conio.h>
int main()
{
   int a[5],i;

   for(i=0;i<=4;i++)
   {
	 cout<<"Enter "<<i+1<<" value of array\n";
	 cin>>a[i];
   }

   cout<<"Elements in the array given below\n";
   for(i=4;i>=0;i--)
    {
     cout<<a[i]<<" ";
    }
}