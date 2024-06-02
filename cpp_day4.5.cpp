/*
Create a class Point with data members as x,y. Create default and parametrized 
constructors. write getters and setters for all the data members. Also add the
display function. Create the object of this class in main method and invoke all the
methods in that class.
*/

# include <iostream>
using namespace std;

class Point{
	private :
		int x, y;
		
	public :
		// default constructor
		Point()
		{
			x = y = 0;
		}
		
		// parametrized constructor
		Point(int x, int y)
		{
			this->x = x;
			this->y = y; 
		}
		
		//getters and setters methods
		void setX(int x)
		{
			this->x = x;
		}
		
		int getX()
		{
			return x;
		}
		
		void setY(int y)
		{
			this->y = y;
		}
		
		int getY()
		{
			return y;
		}
		
		// display function
		void display()
		{
			cout<<"Display function"<<endl;
			cout<<"Point X : "<<x<<endl;
			cout<<"Point Y : "<<y<<endl;
			
		}
};

int main()
{
	Point p1;
	p1.display();
	
	cout<<endl;
	
	Point p2(15, 25);
	p2.display();
	
	cout<<endl;
	
	Point p3;
	p3.setX(13);
	p3.getX();
	
	p3.setY(8);
	p3.getY();
		
	p3.display();

	return 0;
}
