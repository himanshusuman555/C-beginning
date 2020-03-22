#include<iostream.h>
#include<conio.h>
int main()
{
 int a[5]={10,20,30,40,50};
 clrscr();
 int b[5],i;

 cout<<"First array is given below\n";
 for(i=0;i<5;i++)
 {
  cout<<a[i]<<" ";
  b[i]=a[i];
 }

 cout<<"\n After copying second array\n";
 for(i=0;i<5;i++)
 {
  cout<<b[i]<<" ";
 }
}
