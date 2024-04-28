/*Given N strings, print unique strings
in lexiographical order with their
frequency
N<= 10*5;
|size | <= 100
*/

#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string ,int> m;
	int n;
	cin>>n;
	for(int i  = 0 ;i< n; i++)
	{
		string s;
		cin>>s;
		m[s] = m[s] + 1;
	}

	for(auto it = m.begin() ; it != m.end(); it++)
	{
		cout<<it->first<<" "<<it->second<<endl;

	}

    
}

/*
input
8
abc
def
abc
ghj
jkl
ghj
ghj
abc
output
abc 3
def 1
ghj 3
jkl 1
*/