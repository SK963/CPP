//operators like stream insertion  and stream  extraction  operat can only be overloaded using friend function 

#include <iostream>
using namespace std;
class complex
{
public:
	// private:
	int a , b;

	friend ostream& operator<<(ostream& , complex);
	friend istream& operator>>(ostream& , complex);

};

ostream& operator<<(ostream &cout , complex C)
{
	cout<<C.a<<"+"<<C.b<<"i"<<endl;
	return cout; //for cascading it is important to return
}

istream& operator>>(istream& cin , complex& C)
{
	cin>>C.a>>C.b;
	return(cin);

}

int main()
{
	complex c1;

	cout<<"Enter a complex number:- ";
	cin>>c1;
	cout<<"data entered :-";
	cout<<c1;

	complex c2;
	cout<<"Enter the complex number:- ";
	operator>>(cin,c2); // same meaning as cin>>c2
	cout<<"data entered:- ";
	operator<<(cout,c2); //same meaning as cout<<c2
}