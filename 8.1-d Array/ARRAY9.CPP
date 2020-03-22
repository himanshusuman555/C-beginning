#include<iostream.h>
#include<conio.h>
int main()
{
  int a[100],n,i,min;
  clrscr();
  cout<<"Enter how many number you want to store\n";
  cin>>n;

  cout<<"Enter "<<n<<"  number to one by one\n";
  for(i=0;i<n;i++)
  {
   cin>>a[i];
  }

  min=a[0];
  for(i=0;i<n;i++)
   {
    if(min>a[i])
     {
      min=a[i];
     }
   }
  cout<<"minimum value="<<min;
}
