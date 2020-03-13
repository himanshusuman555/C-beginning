#include<iostream.h>
#include<conio.h>
class Rectangle
{
	public:
	 int height;
	 int width;
	 int area;

	void Areaofrect()
	{
	 area=height+width;
	 cout<<"Area of rectangle="<<area;
	}
};

int main()
{
 Rectangle obj;
 clrscr();
 obj.height=20;
 obj.width=40;
 obj.Areaofrect();
}
