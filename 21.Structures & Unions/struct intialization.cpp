#include <iostream> 
#include <cstring> 
using namespace std;


//declaration
struct human
{
	int id;
	char  name[20];
	char *section = new char[20];
	string add;
	float price;

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
	//M1 initialization with declaration 
	human h1 = {12223527 , "shubham", "K22EG" , "JHARKHAND", 150};
	cout<<h1.id <<" "<<h1.name<<" "<<h1.section<<" "<<h1.add<<" "<<h1.price<<endl;
	//M2 intialization after declaration 
	h1.id = 12223528;
	strcpy(h1.name,"Alfaz"); // h1.name = "Alfaz" - not allowed
	h1.section = "KOCCR"; //
	h1.add = "BOKARO";
	h1.price = 123.23;
	cout<<h1.id <<" "<<h1.name<<" "<<h1.section<<" "<<h1.add<<" "<<h1.price<<endl;

	//M3 direct assignment of data into stucture

	//M4 using a function 
	human h2 = h1;
	cout<<h2.id <<" "<<h2.name<<" "<<h2.section<<" "<<h2.add<<" "<<h2.price<<endl;
	human h3;
	h3.input();
	h3.show();
}
