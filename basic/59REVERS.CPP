#include<iostream.h>
#include<conio.h>
int main()
{
   int no,b;
   cout<<"ENter the number: ";
   cin>>no;

   do
   {
    b=no%10;
    cout<<b;
    no=no/10;
   }while(no!=0);
}
