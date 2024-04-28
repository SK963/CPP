
#include <iostream>
using namespace std;

// Class A
class A {
	int a;

public:
	int* ptr;

	// Constructor of class A
	A()
	{
		cout << "Constructor Called!"<<endl;
	}

	~A()
	{
		cout<<"Destructor called ."<<endl;
	}


};

// Driver Code
int main()
{
	A a1; 
	// call construcor								
	A* a2 = new A; 
	// call constructor
	A* a3 = (A*)malloc(sizeof(A)); 
	// no call to constructor

	delete (a2); 
	// call destrcutor
	free (a3);
	// does not call destructor
	// return 0;
	//ends the scope of a1 and call the destructor
	exit(0); 
	// stops the calling of the destructor call for a1
}
//after end of the scope of a1 ;
// destructor will be called