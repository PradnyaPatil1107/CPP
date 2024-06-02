/*
create a class book with data members as bname, id, author, price. write getters and setters 
for all the data members. also add the display function. create default and parametrized
constructors. create the object of this class in main method and invoke all the methods in 
that class.
*/
# include<iostream>
using namespace std;

class Book{
	private :
		string bname;
		int id;
		string author;
		float price;
		
	public :
		// default constructor
		Book()
		{
			cout<<"Default constructor"<<endl;
			string bname = "No name";
			int id = 404;
			string author = "Unknown";
			float price = 10.20;
		}
		
		// parametrized constructor
		Book(string bname, int id, string author, float price)
		{
			cout<<"Parametrized constructor"<<endl;
			this->bname = bname;
			this->id = id;
			this->author = author;
			this->price = price;
		}
		
		//getters and setters methods
		void setBookName(string book_name)
		{
			this->bname = book_name;
		}
		
		string getBookName()
		{
			return bname;
		}
		
		void setId(int book_id)
		{
			this->id = book_id;
		}
		
		int getId()
		{
			return id;
		}
		
		void setAuthor(string book_author)
		{
			this->author = book_author;
		}
		
		string getAuthor()
		{
			return author;
		}
		
		void setPrice(float book_price)
		{
			this->price = book_price ;
		}
		
		float getPrice()
		{
			return price;
		}
		
		// display function
		void display()
		{
			cout<<"Display function"<<endl;
			cout<<"Book's' Name : "<<bname<<endl;
			cout<<"Book's Author Name : "<<author<<endl;
			cout<<"Book ID : "<<id<<endl;
			cout<<"Book's Price : "<<price<<endl;
		}
};

int main()
{
	Book b1;
	b1.display();
	
	cout<<endl;
	
	Book b2("Atomic Habits", 1100, "James Clear", 500.60);
	b2.display();
	
	cout<<endl;
	
	Book b3;
	b3.setBookName("Twinkle");
	b3.getBookName();
	
	b3.setAuthor("Someone");
	b3.getAuthor();
	
	b3.setId(3425);
	b3.getId();
	
	b3.setPrice(654.89);
	b3.getPrice();
	
	b3.display();

	
	
	return 0;
}
