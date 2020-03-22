#include<iostream.h>
#include<conio.h>
int main()
{
  int a[100],n,i,max;
  clrscr();
  cout<<"Enter how many number you want to store\n";
  cin>>n;

  cout<<"Enter "<<n<<"  number to one by one\n";
  for(i=0;i<n;i++)
  {
   cin>>a[i];
  }

  max=a[0];
  for(i=0;i<n;i++)
   {
    if(max<a[i])
     {
      max=a[i];
     }
   }
  cout<<"maximum value="<<max;
}
