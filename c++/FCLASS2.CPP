//Method 2
#include<iostream.h>
#include<conio.h>
class author
{
 char aname[20];
 friend class book;
};

class book
{
	 char bname[20];
	 float price;

	 author a;
	 public:
	 void getdata()
	 {
	  cout<<"Enter author name:";
	  cin>>a.aname;

	 cout<<"Enter book name:";
	 cin>>bname;

	 cout<<"Enter price:";
	 cin>>price;
	}

       void putdata()
	 {
	  cout<<"\nauthor name="<<a.aname<<endl;
	  cout<<"book name="<<bname<<endl;
	  cout<<"price="<<price;
	 }
};
void main()
{
 book b;
 clrscr();
 b.getdata();
 b.putdata();
 getch();
}



