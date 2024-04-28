/*Given N strings .
print unique string in albpabatical order 
n =  10^6
|s| <= 100
*/

#include <iostream>
#include <set>
using namespace std;


int main()
{
	int size;
	cin>>size;

	set<string> m;
	for(int i = 0 ; i< size ; i++)
	{
		string s;
		cin>>s;
		m.insert(s);
	}

	for(string s:m)
	{
		cout<<s<<endl;
	}
	
}

/*
INPUT
8
abc
def
abc
ghj
jkl
ghj
ghj
abc
OUTPUT
abc
def
ghj
jkl
*/