#include<iostream.h>
#include<conio.h>
int  main()
{
 int no;
 cout<<"Enter any number";
 cin>>no;

 cout<<"factor is given below\n";

 for(int i=1;i<=no;i++)
 {
  if(no % i ==0)
  cout<<i<<"  ";
 }
}
