/*Given N strings and Q queries.
In each query you are given a string
print • frequency • of • that • string
n =  10^6
|s| <= 100
*/

#include <iostream>
#include <unordered_map>
using namespace std;



int main()
{
	int size;
	cin>>size;

	unordered_map<string ,int> m;
	for(int i = 0 ; i< size ; i++)
	{
		string s;
		cin>>s;
		m[s] += 1;
	}

	int q;
	cin>>q;

	while(q--)
	{
		string s;
		cin>>s;
		cout<<s<<" "<<m[s]<<endl;
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
2
abc
ghj
output
abc 3
ghj 3

*/

