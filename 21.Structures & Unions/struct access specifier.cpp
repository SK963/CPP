#include <iostream> 
#include <cstring> 
using namespace std;


//declaration
struct human
{
	private:
	int id;
	char  name[20];
	char *section = new char[20];
	string add;
	float price;
	public:
void input()
{
	cout<<"enter id :- ";
	cin>>id;
	cout<<"enter the name :- ";
	cin>>name;
	cin.ignore();
	cout<<"enter section:- ";
	cin>>section;
	cin.ignore();
	cout<<"enter address:- ";
	cin>>add;
	cout<<"enter price:- ";
	cin>>price;
}

void show()
{
	cout<<id <<" "<<name<<" "<<section<<" "<<add<<" "<<price<<endl;
}


};




int main()
{
	human h1;
	h1.input();
	h1.show();
	human h2;
	// h2.id = 12223527 - //not allowed
}