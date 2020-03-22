#include<iostream.h>
#include<conio.h>
int main()
{
 int roll[10]={14,52,63,45,65,84,75,96,51,62};
 int r,m=0,i;
 clrscr();

 cout<<"roll numbers are given below\n";
 for(i=0;i<9;i++)
 {
  cout<<roll[i]<<" ";
 }

 cout<<"\nEnter your rollno to search\n";
 cin>>r;

 for(i=0;i<9;i++)
 {
  if(r==roll[i])
  {
   cout<<"your rollno found at position: "<<i+1;
   m=1;
  }
 }
 if(m==0)
 {
  cout<<"not found";
 }
}


