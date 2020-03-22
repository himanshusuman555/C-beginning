#include<iostream.h>
#include<conio.h>
int main()
{
   int a[50],b[50],c[50],n,i;
   clrscr();
   cout<<"how many elements you want to enter\n";
   cin>>n;

   cout<<"Now enter"<<n<<" elements in first array\n";
   for(i=0;i<n;i++)
    {
     cin>>a[i];
    }

   cout<<"Now enter "<<n<<" elements in second array\n";
   for(i=0;i<n;i++)
    {
     cin>>b[i];
    }

   cout<<"Addition of first and second array is given below\n";
   for(i=0;i<n;i++)
    {
       cout<<a[i] + b[i]<<"  ";
    }
}

