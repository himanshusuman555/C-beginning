#include<iostream.h>
#include<conio.h>
void main()
{
 int **p;   //double pointer  because one pointer store row and other column
 int nc,nr,r,c;     //no of rows // no of columns
 clrscr();
 cout<<"Enter no of rows and columns";
 cin>>nr>>nc;   //2 ,3

 p=new int *[nr]; // nr=2 memory allocated for rows in heap

 for(r=0;r<nr;r++)   // row 0 to row 1
 p[r]=new int[nc];   // nc= 3 columns allocated to p[row 0]
		     // then r++ nd 3 column allocated to p[row 2]

 cout<<"Enter"<<nr*nc <<"elements";
 for(r=0;r<nr;r++)
 for(c=0;c<nc;c++)
 cin>>p[r][c];

 cout<<"elements are=";
 for(r=0;r<nr;r++)
 for(c=0;c<nc;c++)
 cout<<p[r][c]<<ends;
 cout<<endl;

 delete p;
 getch();
}
