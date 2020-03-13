#include<iostream.h>
#include<conio.h>
class Rectangle
{
	public:          //we are able to access the variables of the class via objects below because these are public . if private then these cant bhe accessed by the objects directly.
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
