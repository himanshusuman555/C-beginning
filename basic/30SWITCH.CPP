#include<iostream.h>
#include<conio.h>
int main()
{
 int a;
 cout<<"Enter day from 1-7 :  ";
 cin>>a;

 switch(a)
 {
 case 1: cout<<" monday";
	 break;

 case 2: cout<<" Tuesday";
	 break;

 case 3: cout<<" wednesday";
	 break;

 case 4: cout<<" thursaday";
	 break;

 case 5: cout<<" friday";
	 break;
 case 6: cout<<" saturday";
	 break;

 case 7: cout<<" sunday";
	 break;
 default: cout<<"invalid";
 }
}