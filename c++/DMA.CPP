#include<iostream.h>
#include<conio.h>
void main()
{
 int n;
 clrscr();
 cout<<"Enter any size";
 cin>>n;

 int *p=new int[n];
 cout<<"now enter the "<<n<<" elements";
 for(int i=0;i<n;i++)
 {
  cin>>p[i];
 }

 cout<<"ELements are";
 for(i=0;i<n;i++)
 {
  cout<<p[i];
 }

 delete p;
 getch();
}