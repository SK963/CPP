/*Given N strings and Q queries.
In each query you are given a string
print yes if string is present
else print no.
*/

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
	unordered_set<string> s;
	int size;
	cin>>size;

	for(int i = 0 ; i< size; i++)
	{
		string str;
		cin>>str;
		s.insert(str);
	}

	int q;
	cin>>q;
	for(int i = 0 ;i < q ; i++)
	{
		string str;
		cin>>str;
		if(auto it = s.find(str) != s.end() )
		{
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
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
3
abc
tyu
ghj

OUTPUT
Yes
No
Yes
*/


